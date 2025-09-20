// Q-> Find the kth smallest ele. in a given array. 
// by using maxheap. -> maximum ele. at on the top. 

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





// By using minheap. -> minimum ele. at on the top. 

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

