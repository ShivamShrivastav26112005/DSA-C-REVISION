
// Q-4 -> Previous greater element of the given array. 
// Solved Using Stacks -: 
// Stacks Leetcode Problems -: 


#include<iostream>
#include<stack>
using namespace std;

int main(){
    int arr[]={3,4,7,2,5,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // by using stack -: 
    // we make an answer array ans of size n 
    int ans[n];
    // fill 1st previous greater ele. -1 by default 
    ans[0]=-1;

    // make a stack 
    stack<int>st;
    st.push(arr[0]);

    // travel loop -> forward 
    for(int i=1; i<=n-1; i++){ // i<=n

        // pop -: 
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }

        // ans -: 
        if(st.size()==0) ans[i]=-1;
        else ans[i]=st.top();

        // push -: 
        st.push(arr[i]);

    }
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
}

// 3 4 7 2 5 1 
// -1 -1 -1 7 7 5 

