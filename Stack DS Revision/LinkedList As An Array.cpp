

// Implementation of LinkedList by using stack -: 
// LinkedList as an Stack -: 
// Make node head and size in the class to implement the linkedlist -: 
// All work done by using "head" only -:


#include<iostream>
#include<stack>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

class Stack{ // user defined data structure -:
public:
    int size;
    Node* head;

    Stack(){
        size=0;
        head=NULL;
    }

    // push in the stack only -: 
    void push(int val){
        Node* temp=new Node(val);
        temp->next=head;
        head=temp;
        size++;
    }

    void pop(){
        if(head==NULL){
            cout<<"Stack is empty ! Underflow ! "<<endl;
            return ; 
        }else{
            head=head->next;
            size--;
        }
    }

    int top(){
        if(size==0){ // or if(head==NULL)
            cout<<"Stack is empty ! Underflow ! "<<endl;
            return -1;
        }else{
            return head->val;
        }
    }

    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};


int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    st.display();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.display();

}

// 50 40 30 20 10 
// 50
// 40
// 40 30 20 10


// Stacks is done. 
