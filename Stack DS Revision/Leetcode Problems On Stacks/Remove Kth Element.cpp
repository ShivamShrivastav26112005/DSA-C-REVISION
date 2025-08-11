// Ques -: Remove kth element from top in a given stack. 
// use an extra stack, just like insertion in stack by using extra stack.

#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    cout<<st.size()<<endl;

    int k=4;
    stack<int>rt;
    while(st.size()>0){
        rt.push(st.top());
        cout<<st.top()<<" ";
        st.pop();
    }

    while(rt.size()>0){
        st.push(rt.top());
        rt.pop();
    }
    cout<<endl;
  
    stack<int>helper;
    for(int i=0; i<k-1; i++){
        int x=st.top();
        st.pop();
        helper.push(x);
    }

    st.pop();

    while(helper.size()>0){
        int x=helper.top();
        helper.pop();
        st.push(x);
    }
  
    while(st.size()>0){
        rt.push(st.top());
        cout<<st.top()<<" ";
        st.pop();
    }

    while(rt.size()>0){
        st.push(rt.top());
        rt.pop();
    }
    cout<<endl;
}

// 5
// 50 40 30 20 10
// 50 40 30 10



