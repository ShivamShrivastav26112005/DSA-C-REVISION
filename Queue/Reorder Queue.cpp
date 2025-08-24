// Q-> Reorder Queue ( Interleave 1st half with 2nd half ).
// Solved by using one stack only, given queue / queue's ele. with even length. 


#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void display(queue<int>& q){
    int n=q.size();
    for(int i=0; i<n; i++){
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}

void reorder(queue<int>& q){
    stack<int>st;
    int n=q.size();

    // pop 1st half of the queue to the stack -: 
    for(int i=0; i<n/2; i++){
        st.push(q.front());
        q.pop();
    }
    // empty the stack into the queue again -: 
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }

    // pop 2nd half (now the 1st half) of the queue to the stack -: 
    for(int i=0; i<n/2; i++){
        st.push(q.front());
        q.pop();
    }

    // Interleave one by one -: 
    while(st.size()>0){
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }

    // reverse again whole queue's ele.s by using stack -: 
    while(q.size()>0){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
}

int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);

    display(q);
    reorder(q);
    display(q);
}

// 1 2 3 4 5 6 7 8 
// 1 5 2 6 3 7 4 8 
