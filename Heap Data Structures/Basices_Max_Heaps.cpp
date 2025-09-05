// Heaps OR Priority Queues Data Structure -: Imp for Placement. 


// Heaps me ele.s insert karne ke bad hm shirf "top" ko hi access kar skte hai pop kar skte hai "top" ele. ko hi bas like stack data structure
// function of heaps or priority queues -: push, pop, top ele.s present in the heaps in a random order. 


// Heaps -: two types. 
// 1-: max heap -: maximum ele. present at the top of the heap and other ele.s present in the heap in random order. 
// 2-: min heap -: minimum ele. present at the top of the heap and other ele.s present in the heap in random order. 


// What and Why ?
// If we want a data structure in which we can always get the maximum or minimum ele. at any point of time then we use priority queues or heaps 


// TC-: 
// top() -: O(1) -> find the top ele. always 
// push(x) -: O(logn), n is current size ex-> hm push kiye 60 then fir se re-arrange hua ele and top per min or max ele. aayega, TC-O(logn)
// pop() -: O(logn)-> becoz pop hone ke bad fir se rearrange heap hota and min or max ele fir se top per aata hai to vh jo "searching" hoti hai uski TC=O(logn)


// fun-: push, pop, top 


#include<iostream>
#include<queue> // we include the header file to use the STL of priority queue 
using namespace std;
int main(){
    // max heap -: 
    // priority_queue<datatype> Pq_name-: it is used to include the stl of PQ.
    // like a stack<int> st;

    priority_queue<int> pq;
    pq.push(10);
    pq.push(25);
    pq.push(-6);
    pq.push(81);
    cout<<pq.top()<<endl; // 81
    pq.pop(); // 81 is removed 
    cout<<pq.top()<<endl; // 25

    // min heap -: we include this
    priority_queue<int, vector<int> , greater<int>> pq;
    pq.push(10); // at the top present 10 
    pq.push(25); // 10 
    pq.push(-6); // -6
    pq.push(81); // -6 present at the top
    cout<<pq.top()<<endl; // -6
    pq.pop(); // -6 is removed 
    cout<<pq.top()<<endl; // 10

    // min heap -:
    priority_queue<float, vector<float> , greater<float>> pq;
    pq.push(10.3); // at the top present 10.3
    pq.push(23.5); // 10.3
    pq.push(-6.6); // -6.6
    pq.push(0); // -6.6 present at the top
    cout<<pq.top()<<endl; // -6.6
    pq.pop(); // -6.6 is removed 
    cout<<pq.top()<<endl; // 0 

}









// 2 Types of Heaps -: 

// 1-> max heap (by default) means jo hm stl se priority_queue banate hai
// vo mera max heap hi banata hai 
// max ele. is on the top. 

// 2-> min heap -:
// min ele. is on the top. 
  
// Header file -: 
// maxheap -: priority_queue<datatype>Pq_name
// minheap -: priority_queue<int, vector<int> , greater<int>> pq;



// Problem identification -: Where we apply heaps DS. 
// Like in sliding window -> words -: window of size k for applying prefix sum -> words -: subarrays ques. 
// In Stacks -> when you have put TC constant or performs all the ops in constant

// Similarly -: in heaps -> where you apply heaps DS -: 
// 1-: kth smallest, largest, top k frequent ele.s, closest k, k sorted arrays
// 2-: at any point of time, minimum or maximum ele.s are required 
// 3-: sorting sometimes using heaps (heap sort) 









Q-> Find the kth smallest ele. in a given array. 

// by using maxheap. 

#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[]={3,1,-76,40,38,50,5,30,66}; // array'size = n
    int k=2; // 2th smallest ele. we want
    int n=sizeof(arr)/4; // find array size -> we divide by 4 becoz size of integer is 4 bytes, sizeof(arr)=36/4=9 ele.s  

    priority_queue<int> pq; // here we use maxheap(by default)
    for(int i=0; i<n; i++){ // traverse in the array and push ele. in the maxheap
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop(); // topmost ele. -> ko delete kar diye
    }
    cout<<pq.top(); // our kth smallest ele.

} // 1





// by using minheap. 

#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[]={3,1,-76,40,38,50,5,30,66}; // array'size = n
    int k=3; // 3rd smallest ele. we want
    int n=sizeof(arr)/4; 

    priority_queue<int,vector<int>,greater<int>> pq; // here we use minheap
    for(int i=0; i<n; i++){ // push ele.s in the minheap 
        pq.push(arr[i]);
    }
    for(int i=1; i<k; i++){ // traverse in the array and remove ele.s which is less than k 
        pq.pop(); 
    }
    cout<<pq.top(); // our kth smallest ele.

} // 3



