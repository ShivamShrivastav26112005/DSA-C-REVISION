// Recursion in stacks -: 

// base case 
// kaam 
// call 


// Stack pass by reference (&) to a function -: 

#include<iostream>
#include<stack>
using namespace std;

void printrecNor(stack<int>& st){
    if(st.size()==0) return; // base case 
    int x=st.top();
    cout<<x<<" "; // kaam 
    st.pop();
    printrecNor(st); // call
    st.push(x);
}

void printrecRev(stack<int>& st){
    if(st.size()==0) return ; // base case 
    int x=st.top();
    st.pop();
    printrecRev(st); // call 
    cout<<x<<" "; // kaam 
    st.push(x);
}

int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    printrecNor(st);
    cout<<endl;
    printrecRev(st);
}

// 50 40 30 20 10 
// 10 20 30 40 50




