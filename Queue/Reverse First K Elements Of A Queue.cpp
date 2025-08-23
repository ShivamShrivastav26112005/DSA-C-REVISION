// Q-> Reverse First K Ele.s of a queue.

// I am already solve reverse the queue using an extra stack.
// Solved by using an extra stack first k ele.s means from front to k ele.s tk 


#include<iostream>
#include<queue>
#include<stack>
using namespace std;

// queue display by using "for loop" -: 
void display(queue<int>& q){ // TC=O(n)-> traverse, SC=O(1) becoz again all the ele.s pushed to the same queue (pichhe se push ho jate hai queue me)
    int n=q.size();
    for(int i=0; i<n; i++){
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}

// queue is pass to fun by reference (&). 
void reverse_k(queue<int>& q, int k){
    int n=q.size();
    // reverse k ele.s by using stack -: 
    stack<int>st;
    // 1-: push k ele.s to the stack using for loop 
    for(int i=0; i<k; i++){
        int x=q.front();
        st.push(x);
        q.pop();
    }

    // again push ele.s of the stack in the queue (stack convert ele.s in reverse order)
    while(st.size()>0){
        int x=st.top();
        q.push(x);
        st.pop();
    }

    // except all ele.s ko again push karenge from the same queue -: 
    for(int i=0; i<n-k; i++){
        int x=q.front();
        q.push(x);
        q.pop();
    }
}

int main(){
    queue<int>q;
    // k is already given in the ques -: 
    int k=2;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    display(q);
    reverse_k(q,k);
    display(q);
}

// 10 20 30 40 50 60 
// 20 10 30 40 50 60 


