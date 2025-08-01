// Stack is passing to function by reference -: 
// Stack is not pass by value to a function, Stack is pass by reference (&) to a function.



// Basic operations on stacks -: 
// push 
// pop
// top 


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
    cout<<st.top()<<endl;

    st.pop();
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;

    st.pop();

    // normal method for printing stacks ele.s 
    // display stack's ele.s -:
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    } 
    cout<<endl;

    // correct method for printing stacks ele.s 

    stack<int>temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        int x=st.top();
        st.pop();
        temp.push(x);
    }

    while(temp.size()){
        int x=temp.top();
        st.push(x);
        temp.pop();
    }

    
}

// 50 40 30 20 10 










// Problem -: Push element at the bottom of the stack -:

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


    cout<<"Display before adding ele. "<<endl;
    stack<int>temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }

    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
    

    stack<int>temp2;
    while(st.size()>0){
        int x=st.top();
        temp2.push(x);
        st.pop();
    }

    st.push(100);

    while(temp2.size()>0){
        int x=temp2.top();
        st.push(x);
        temp2.pop();
    }


    cout<<"Display before adding ele. "<<endl;
    
    while(st.size()>0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }

    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }

}

// Display before adding ele. 
// 50 40 30 20 10 
// Display before adding ele. 
// 50 40 30 20 10 100






