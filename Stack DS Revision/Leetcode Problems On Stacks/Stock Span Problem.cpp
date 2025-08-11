// Leetcode Problem -: 

// Q-7-: Stock Span Problem  


#include<iostream>
#include<stack>
using namespace std;

int main(){
    int arr[]={100,80,60,81,70,60,75,85};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // we make previous greater ele. "idx" array 
    // previous greater idx.
    int pgi[n];
    pgi[0]=-1;

    stack<int>st;
    st.push(0); // push only idx not ele. 

    for(int i=1; i<=n-1; i++){
        // pop -:  
        while(st.size()>0 && arr[st.top()]<=arr[i]){
            st.pop();
        }

        // ans -: 
        if(st.size()==0) pgi[i]=-1;
        else pgi[i]=st.top();

        // push -: 
        st.push(i); // push idx 
    }
    for(int i=0; i<n; i++){
        pgi[i]=i-pgi[i];
    }

    for(int i=0; i<n; i++){
        cout<<pgi[i]<<" ";
    }
}

// 100 80 60 81 70 60 75 85




// 1 1 1 3 1 1 3 7
