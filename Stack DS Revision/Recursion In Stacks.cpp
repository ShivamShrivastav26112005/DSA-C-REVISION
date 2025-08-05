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









// Push At Bottom Recursively -: 

#include<iostream>
#include<stack>
using namespace std;

void printNor(stack<int>& st){
    if(st.size()==0) return ;
    int x=st.top();
    cout<<x<<" ";
    st.pop();
    printNor(st);
    st.push(x);
}

void printRev(stack<int>& st){
    if(st.size()==0) return ;
    int x=st.top();
    st.pop();
    printRev(st);
    cout<<x<<" ";
    st.push(x);
}

void pushatbottom(stack<int>& st, int val){
    if(st.size()==0){ // base case 
        st.push(val);
        return;
    }
    int x=st.top(); // kaam
    st.pop();
    pushatbottom(st,val); // call 
    st.push(x); 
}

int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    printNor(st);
    cout<<endl;
    printRev(st);
    pushatbottom(st,1000);
    cout<<endl;
    printNor(st);
    cout<<endl;
    printRev(st);

}


// 50 40 30 20 10 
// 10 20 30 40 50
// 50 40 30 20 10 1000 
// 1000 10 20 30 40 50





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

    stack<int>rt;
    while(st.size()>0){
        rt.push(st.top());
        st.pop();
    }

    while(rt.size()>0){
        cout<<rt.top()<<" ";
        st.push(rt.top());
        rt.pop();
    }

}
// 10 20 30 40 50 

// Done. 
