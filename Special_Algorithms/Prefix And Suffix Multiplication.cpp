// Prefix, Suffix -: Sum And Multiplication -:

// Prefix Sum -: 

#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before Apply prefix Sum : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // prefix sum algo -:
    int pre[n];
    pre[0]=arr[0];
    for(int i=1; i<n; i++){
        pre[i]=arr[i]+pre[i-1];
    }
    cout<<"After apply prefix sum : ";
    for(int i=0; i<n; i++){
        cout<<pre[i]<<" ";
    }
}

// Before Apply prefix Sum : 1 2 3 4 5 6 
// After apply prefix sum : 1 3 6 10 15 21 








// Prefix Multiply  -: 

#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before Apply prefix Sum : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // prefix sum algo -:
    int pre[n];
    pre[0]=arr[0];
    for(int i=1; i<n; i++){
        pre[i]=arr[i]*pre[i-1];
    }
    cout<<"After apply prefix sum : ";
    for(int i=0; i<n; i++){
        cout<<pre[i]<<" ";
    }
}

// Before Apply prefix Sum : 1 2 3 4 5 6 
// After apply prefix sum : 1 2 6 24 120 720 





// Suffix Sum  -: 

#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before Apply prefix Sum : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // Suffix sum algo -:
    int suff[n];
    suff[n-1]=arr[n-1];
    for(int i=n-2; i>=0; i--){
        suff[i]=arr[i]+suff[i+1];
    }
    cout<<"After apply prefix sum : ";
    for(int i=0; i<n; i++){
        cout<<suff[i]<<" ";
    }
}

// Before Apply prefix Sum : 1 2 3 4 5 6 
// After apply prefix sum : 21 20 18 15 11 6








// Suffix Multiply  -: 

#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before Apply prefix Sum : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // Suffix multiply algo -:
    int suff[n];
    suff[n-1]=arr[n-1];
    for(int i=n-2; i>=0; i--){
        suff[i]=arr[i]*suff[i+1];
    }
    cout<<"After apply prefix sum : ";
    for(int i=0; i<n; i++){
        cout<<suff[i]<<" ";
    }
}

// Before Apply prefix Sum : 1 2 3 4 5 6 
// After apply prefix sum : 720 720 360 120 30 6 





// Sliding window algo -:

// find the maximum subarray sum from the given array with size k where array and the size k is given.

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[]={1,3,5,7,8};
    int k=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // sliding window algo used -: 
    // first find previous sum then find current sum by apply sliding window algo -: 
    int maxsum=INT_MIN;
    int presum=0;
    for(int i=0; i<k; i++){
        presum+=arr[i];
    }
    maxsum=presum;
    // sliding window alggo -: 
    int i=1;
    int j=k;
    while(j<n){
        int currsum=presum+arr[j]-arr[i-1];
        if(currsum>maxsum){
            maxsum=currsum;
        }
        presum=currsum;
        i++;
        j++;
    }
    cout<<maxsum;
}

// 1 3 5 7 8 
// 20 -> this is the maximum sum.

// Done -: 
