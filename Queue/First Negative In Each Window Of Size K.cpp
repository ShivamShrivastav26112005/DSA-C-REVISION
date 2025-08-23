Q-> First Negative in each window of size k. 
Given an array/vector and k.

// Method-1-: Brute force -: TC=O(n*k)
#include<iostream>
using namespace std;
int main(){
    int arr[]={0,-1,-2,3,4,-5,6,4,7,-8};
    int k=3;

    // by using sliding window algo. 
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int ans[n-k+1];
    for(int i=0; i<n-k+1; i++){ // loop run till n-k+1
        ans[i]=0; // set default value 
        for(int j=i; j<i+k; j++){ // picks window of size k 
            if(arr[j]<0){ // check for -ve ele. 
                ans[i]=arr[j]; // 1st -ve ele. 
                break; 
            }
        }
    }
    for(int i=0; i<=n-k; i++){
        cout<<ans[i]<<" ";
    }
}

// 0 -1 -2 3 4 -5 6 4 7 -8 
// -1 -1 -2 -5 -5 -5 0 -8










// Method-2 -: TC-> reduce with the help of queues. 
// solved by using queue -: 


#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    int arr[]={0,-1,-2,3,4,-5,6,4,7,-8};
    int k=3;

    // by using sliding window algo. 
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    vector<int>ans;
    queue<int>q;
    for(int i=0; i<n; i++){
        if(arr[i]<0){ // -ve ele. 
            q.push(i);
        }
    }

    int i=0;
    while(i<=n-k){ // loop run till last window, n-k ele.s 
        while(q.size()>0 && q.front()<i) q.pop(); // it checks underflow condi. (q.size()>0) then you can access the ele. of the queue 
        // now either front of the queue is lies in the window or outside the window 
        if(q.size()==0 || q.front()>=i+k) ans.push_back(0); // outside the window 
        else ans.push_back(arr[q.front()]); // push ele -> arr[q.front()] not idx -> q.front() becoz we push idx of the array in the queue 
        i++; // window aage badha 
    }

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}

// 0 -1 -2 3 4 -5 6 4 7 -8 
// -1 -1 -2 -5 -5 -5 0 -8


