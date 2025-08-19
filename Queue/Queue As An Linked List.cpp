
// Queue as an Linked List -: 

// Implementation of the linked list using queue -: 

#include<iostream>
using namespace std;

class Node { // user defined data type -: 
public:
    int val;
    Node* next;

    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

// queue as an linked list -: Node, head, tail 
class Queue { // user defined data structure -: 
public:
    int size;
    Node* head;
    Node* tail;

    Queue(){
        size=0;
        head=tail=NULL;
    }

    void push(int val){ // push ele from the back/tail of the queue/ll
        Node* temp=new Node(val);
        if(size==0){
            head=tail=temp;
        }else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }

    void pop(){ // remove ele from the front/head of the queue/ll
        if(size==0){
            cout<<"Queue is empty ! "<<endl;
            return ;
        }else{
            Node* temp=head;
            head=head->next;
            size--;
            delete(temp);
        }
    }

    int front(){
        if(size==0){
            cout<<"Queue is empty ! "<<endl;
            return -1;
        }else{
            return head->val;
        }
    }

    int back(){
        if(size==0){
            cout<<"Queue is empty ! "<<endl;
            return -1;
        }else{
            return tail->val;
        }
    }

    bool empty(){
        if(size==0) return true;
        else return false;
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

int main() {
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.display();

    q.pop();   
    q.display();

    cout<<q.back()<<endl;
    cout<<q.front()<<endl;
    cout<<q.empty()<<endl;

}

// 10 20 30 40 50 
// 20 30 40 50
// 50
// 20
// 0


// Done -: 
 
