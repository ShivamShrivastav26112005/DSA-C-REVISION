// Today's checklist -: 
// -> Heaps Visualisation (MaxHeap and MinHeap)
// -> Implementation of MinHeap by array 
// -> Heapify algorithm 
// -> Heap sort 
// -> Ques. on Heaps 

// Heap or Binary Heap Visualisation  -: 
// like a binary tree. 

// let's do minHeap -: push(insertion), pop(deletion) -: TC=O(logn), n is no.of ele.s 
// top(accessing) TC=O(1)

// we push ele. in the minHeap and those ele. is pushed into those bag 
// but if we pop ele. then minimum ele. jo topmost per tha vh delete ho gya 
// and fir se ele.s re-arrange ho gye aur minimum ele. top most per aa gya 

// pop-> minimum ele removed from the top of the minheap and re-arrange 
// all the ele.s and again minimum ele. comes at the top 

// We Visualise binary heap or heap using binary tree. 
// done in copy notes 


// Implementation of minHeap using array and you can visualise this using complete binary tree (CBT).
// CBT-: from 1st level to 2nd last level tk all the levels are full except last level.
// ele.s starts filling in the CBT from left to right. 



// Q-: Implementation of minHeap using array -: 

// Implementation of minheap by using array and visulise the minheap by using complete binary tree (CBT)
// Minheap is implemented through array.
// Parent should be greater than child in case of maxheap and Parent is lesser than child in case of minheap.

// formula used -: 
// if parent is at i or for a node at i, then 
// left child = 2*i
// right child = 2*i+1

// if child is at i, then 
// parent = i/2


// Q-: Implementation of minHeap using array -: 

#include<iostream>
using namespace std;
class Minheap{
    public:
    int arr[50];
    int idx;
    // constructor 
    Minheap(){
        idx=1;
    }

    // top of the ele. of the minheap 
    int top(){
        return arr[1];
    }

    void push(int x){
        arr[idx]=x;
        int i=idx;
        idx++;

        // swapping of i with parent till i==1 (1 is idx)
        // visualise like a CBT means that we are doing swapping(min ele. goes to their right position or goes to parent node
        // which is min and both the left and right child of parent is greater ) till i goes to 1st index of CBT.

        while(i!=1){
            int parent=i/2;
            // when we are going to swapping 
            if(arr[i]<arr[parent])
            swap(arr[i],arr[parent]);
            // not swapping if ele which we push in the arr or CBT is greater than parent 
            else break;

            i=parent; // then i ko parent per la dete h next itertion ke liye (checking again that ele.s swaps or not)
        }
    }
    
    // size == idx-1
    int size(){
        return idx-1;
    }

    void pop(){
        // delete/pop the ele (sbse min. ele. pop hoga) from the top of the minheap 
        idx--;
        arr[1]=arr[idx]; // last ele (which is max ele in the minheap) ko rakh denge min ele ke place per

        // re-arrangement -> after deleting ele from top of the minheap 
        int i=1;
        while(true){
            int left=2*i;
            int right=2*i+1;
            if(left>idx-1) break; // idx-1 = size
            if(right>idx-1){ // it means left exists 
                if(arr[i]>arr[left]){ // parent ele. greater h left child se than swap 
                    swap(arr[i],arr[left]);
                    i=left;
                    break;
                }
                else break;
            }
            
            if(arr[left]<arr[right]){ // we find min ele. from left and right child if left child have min ele than agian 
                if(arr[i]>arr[left]){ // check if parent is greater than left child than swap 
                    swap(arr[i],arr[left]);
                    i=left;
                }
                else break;
            }
            else{ // (arr[left]>arr[right])    // right ele. is min ele. 
                if(arr[i]>arr[right]){    // if parent ele. is graeter than right than swap 
                    swap(arr[i],arr[right]);
                    i=right;
                }
                else break;
            }
        }
    }

    // display minheap ele.s via array 
    void display(){
        for(int i=1; i<=idx-1; i++){ // size = idx-1
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Minheap pq;
    pq.push(10);
    pq.push(20);
    pq.display();
    cout<<pq.top()<<" "<<pq.size()<<endl;
    pq.push(11);
    pq.push(2);
    pq.display();
    cout<<pq.top()<<" "<<pq.size()<<endl;
    pq.pop();
    cout<<pq.top()<<" "<<pq.size()<<endl;
    pq.display();
}

// Output -: 
// 10 20 
// 10 2
// 2 10 11 20
// 2 4
// 10 3
// 10 20 11 or 10 11 20

