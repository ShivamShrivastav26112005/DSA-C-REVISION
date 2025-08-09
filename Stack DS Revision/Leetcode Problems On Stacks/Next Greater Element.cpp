// Imp -: 
// Q.3 -> Next greater element.

// given an array and solve ques. and then return an array.

#include<iostream>
using namespace std;

int main(){
    int arr[]={3,1,2,7,4,6,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // Method-1-: solved by using array -: 
    // next greater ele. 

    // make a new ans array named (nge) of size n where we store our ans.
    int nge[n]; 
    for(int i=0; i<n; i++){ // travel in the whole array 
        nge[i]=-1;
        for(int j=i+1; j<n; j++){ // check next ele. from the curr. ele. 
            if(arr[j]>arr[i]){
                nge[i]=arr[j];
                break;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<nge[i]<<" ";
    }
}

// SC=O(1) 
// TC=O(n^2) -> optimize by using stack. 

// 3 1 2 7 4 6 2 3 
// 7 2 7 -1 6 -1 3 -1 





// Method-2 -: by using stack -: 
// Same for all the below ques. -> SC=O(n), TC=O(n)

#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={3,1,2,7,4,6,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int nge[n]; 
    
    // by using stack -: 
    // technique of the stack is used -: pop, top/ans, push. 

    stack<int>st;
    nge[n-1] = -1; // default value is -1 
    st.push(arr[n-1]); // push last ele. into the stack 
    // loop runs n times -: in the whole array -: 
    for(int i=n-2; i>=0; i--){ // travel backward/reverse
        
        // pop -: 
        // pop all the ele.s smaller than arr[i]
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        } 

        // mark the ans -: two cases 
        if(st.size()==0) nge[i]=-1;
        else nge[i]=st.top();

        // push -: 
        // push the arr[i]
        st.push(arr[i]);
    }

    for(int i=0; i<n; i++){
        cout<<nge[i]<<" ";
    }
    
}

 
// SC=O(n), TC=O(n)
// 3 1 2 7 4 6 2 3 
// 7 2 7 -1 6 -1 3 -1 

