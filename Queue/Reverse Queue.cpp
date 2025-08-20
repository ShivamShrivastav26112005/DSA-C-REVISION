// Reverse Queue -: using an extra stack -:

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

void reverse(queue<int>q){
    stack<int>st;
    while(q.size()>0){
        int x=q.front();
        q.pop();
        st.push(x);
    }

    while(st.size()>0){
        int x=st.top(); // store 
        st.pop(); // remove 
        cout<<x<<" "; // print 
        q.push(x); // restore 
    }
    cout<<endl;

}


void remove_even(queue<int>& q){
    int n=q.size();
    // traverse in the queue using for loop -: 
    for(int i=0; i<n; i++){
        if(i%2!=0){ // if i is odd then display the ele.s otherwise no need to display the ele.
            int x=q.front();
            // here you can print the ele. also -:
            cout<<x<<" ";
            q.push(x);
        }
        q.pop();
    }
    cout<<endl;
}

int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    // these are the some function name -: 
    display(q); // fun. name display() and pass arguments queue (q).
    reverse(q);
    display(q);
    remove_even(q);
    display(q);

}

// 10 20 30 40 
// 40 30 20 10
// 10 20 30 40
// 20 40
