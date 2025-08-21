
// IMP -: 
// Q-> Design a Deque (doubly ended queue), by using "doubly linked list" (dll). 


#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};

class Deque{ // user defined data structure -: 
public:
    int s; // size 
    Node* head;
    Node* tail;

    Deque(){
        s=0;
        head=tail=NULL;
    }

    // push ele. from the front of the deque -:
    void pushfront(int val){
        Node* temp=new Node(val);
        if(s==0){
            head=tail=temp;
        }else{
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
        s++;
    }

    // push ele. from the back of the deque -: 
    void pushback(int val){
        Node* temp=new Node(val);
        if(s==0){
            head=tail=temp;
        }else{
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
        s++;
    }

    // remove ele. from the front of the deque -: 
    void popfront(){
        if(s==0){
            cout<<"List is empty ! "<<endl;
            return;
        }else{
            head=head->next;
            if(head!=NULL) head->prev=NULL;
            if(head==NULL) tail=NULL;
        }
        s--;
    }

    // remove ele. from the back of the deque -: 
    void popback(){
        if(s==0){
            cout<<"Doubly Linked List is Empty ! "<<endl;
            return;
        }else if(s==1){
            popfront();
            return;
        }else{
            Node* temp=tail->prev;
            temp->next=NULL;
            tail=temp;
        }
        s--; // size 
    }

    int getathead(){
        if(s==0){
            cout<<"Doubly Linked List is empty ! "<<endl;
            return -1;
        }else{
            return head->val;
        }
    }

    int getattail(){
        if(s==0){
            cout<<"List is empty ! "<<endl;
            return -1;
        }else{
            return tail->val;
        }
    }

    int front(){
        if(s==0){
            cout<<"Queue is empty ! "<<endl;
            return -1;
        }else{
            return head->val;
        }
    }

    int back(){
        if(s==0){
            cout<<"Queue is empty ! "<<endl;
            return -1;
        }else{
            return tail->val;
        }
    }

    bool empty(){
        if(s==0) return true;
        else return false;
    }

    int size(){
        return s; 
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
    Deque dq;
    dq.pushback(10);
    dq.pushback(20);
    dq.pushback(30);
    dq.pushback(40);
    dq.display(); // 10 20 30 40 

    dq.popback();
    dq.display(); // 10 20 30 

    dq.popfront();
    dq.display(); // 20 30 

    dq.pushfront(50);
    dq.display(); // 50 20 30 

    cout<<dq.front()<<endl; // 50 
    cout<<dq.back()<<endl; // 30 
}
