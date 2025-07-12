// 1-: Two Stacks In An Array

#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    stack<int>st;
    stack<int>rt;
    for(int i=0; i<n; i++){
        if(i%2==0){
            st.push(arr[i]);
        }
        if(i%2!=0){
            rt.push(arr[i]);
        }
    }

    for(int i=0; i<n; i++){
        if(i%2==0){
            st.pop();
        }
        if(i%2!=0){
            rt.pop();
        }
    }

    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }

    cout<<endl;

    while(rt.size()>0){
        cout<<rt.top()<<" ";
        rt.pop();
    }
}






// 2-: WAP to find the next greater ele from the array 

#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int>arr={10,20,30,40,3,9,12,18};
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    vector<int>ans(arr.size(),-1); // this ans space is not counted. 
    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            if(arr[j]>arr[i]){
                ans[i]=arr[j];
                break;
            }
        }
    }

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

  


}

// TC=O(n^2), SC=O(1)
