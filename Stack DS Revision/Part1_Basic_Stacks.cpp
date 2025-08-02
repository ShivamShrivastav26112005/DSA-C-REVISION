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








// By using function -: 

#include<iostream>
#include<stack>
using namespace std;

void print(stack<int>st){
    stack<int>temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    cout<<endl;
}

int main(){

    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    print(st);

    // push ele. at the bottom of the stack -: 
    
    stack<int>helper;
    while(st.size()>0){
        helper.push(st.top());
        st.pop();
    }

//     now all the ele.s of the stack is comes in helper stacks, 
//     now st stack is empty, you can insert ele. in the st stack 
//     which goes to bottom of the st stack, and then again insert all the 
//     ele.s of the helper stack to a st stack and then print 


    st.push(1000);

    while(helper.size()>0){
        st.push(helper.top());
        helper.pop();
    }
    print(st);

}

// 50 40 30 20 10 
// 50 40 30 20 10 1000 



// push ele. at the bottom of the stack by using function -:


// Stack is pass by reference (&) to a function -: 

#include<iostream>
#include<stack>
using namespace std;

void print(stack<int>st){
    stack<int>temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    cout<<endl;
}

// Stack is pass by reference (&) to a function -:
void pushatbottom(stack<int>& st, int val){
    stack<int>helper;
    while(st.size()>0){
        helper.push(st.top());
        st.pop();
    }

    st.push(val);

    while(helper.size()>0){
        st.push(helper.top());
        helper.pop();
    }
}

int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    print(st);
    pushatbottom(st,5000);
    print(st);

}

// 50 40 30 20 10 
// 50 40 30 20 10 5000 


