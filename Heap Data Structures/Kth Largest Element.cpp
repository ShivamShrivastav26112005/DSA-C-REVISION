// leetcode --: 215 
// Leetcode -: 215 kth largest ele. 

// Q-> Find the kth largest ele. in a given array. 



  
// by using maxheap. 

#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[]={3,1,-76,40,38,50,5,30,66}; 
    int k=4; // 4th largest ele. we want
    int n=sizeof(arr)/4; 

    priority_queue<int> pq; // here we use maxheap(by default)
    for(int i=0; i<n; i++){ // traverse in the array and push ele. in the maxheap
        pq.push(arr[i]);
    }
    for(int i=1; i<k; i++){
        pq.pop();
    }
    cout<<pq.top(); // our kth largest ele.

} // 38










// Q-: Sort a 'k' sortedd array (sort a nearly sorted array). 

// here we use **minheap** 

#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){

    int arr[]={6,5,3,2,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;

    vector<int>ans; // we make a empty vector ans where we push our sorted array 
    priority_queue<int,vector<int>,greater<int>> pq; // minheap 
    
    // T.C. = n*logk, S.C.= O(n), push and pop -> T.C.= logk 
    // In this time S.C.= O(n) becoz we take an extra space (ans vector) but we can also change our array 
    // therefore, no extra space can be taken 

    for(int i=0; i<n; i++){ // n 
        pq.push(arr[i]);
        if(pq.size()>k){    // logk 
            ans.push_back(pq.top());
            pq.pop();
        }
    }

    // only k ele.s are sorted 
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    // this loop is for except ele. which is present inside the minheap 
    while(pq.size()>0){ 
        ans.push_back(pq.top()); 
        pq.pop();
    }

    // all ele.s are sorted 
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }

} 

// Output->
// 2 3 5 6 6512997 0 2124256005 
// 2 3 5 6 8 9 10


