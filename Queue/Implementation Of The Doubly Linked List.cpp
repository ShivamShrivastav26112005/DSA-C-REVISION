// Q-> Implementation of the doubly linked list (dll). 


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

class DoublyLinkedList{
public:
    int size;
    Node* head;
    Node* tail;

    DoublyLinkedList(){
        size=0;
        head=tail=NULL;
    }


    void insertathead(int val){
        Node* temp=new Node(val);
        if(size==0){
            head=tail=temp;
        }else{
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
        size++;
    }


    void insertattail(int val){
        Node* temp=new Node(val);
        if(size==0){
            head=tail=temp;
        }else{
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
        size++;
    }


    void insertatidx(int idx, int val){
        if(idx<0 || idx>size){
            cout<<"Index is invalid ! "<<endl;
            return;
        }else if(idx==0) insertathead(val);
        else if(idx==size-1) insertattail(val);
        else{
            Node* t=new Node(val);
            Node* temp=head;
            for(int i=0; i<idx-1; i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            t->prev=temp;
            t->next->prev=t;
        }
        size++;
    }


    void deleteathead(){
        if(size==0){
            cout<<"List is empty ! "<<endl;
            return;
        }else{
            head=head->next;
            if(head!=NULL) head->prev=NULL;
            if(head==NULL) tail=NULL;
        }
        size--;
    }


    void deleteattail(){
        if(size==0){
            cout<<"Doubly Linked List is Empty ! "<<endl;
            return;
        }else if(size==1){
            deleteathead();
            return;
        }else{
            Node* temp=tail->prev;
            temp->next=NULL;
            tail=temp;
        }
        size--;
    }


    void deleteatidx(int idx){
        if(size==0){
            cout<<"Sorry, List is empty ! "<<endl;
            return;
        }
        else if(idx<0 || idx>size){
            cout<<"Index is invalid ! "<<endl;
            return;
        }else if(idx==0) return deleteathead();
        else if(idx==size-1) return deleteattail();
        else{
            Node* temp=head;
            for(int i=0; i<idx-1; i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            temp->next->prev=temp;
        }
        size--;
    }


    int getathead(){
        if(size==0){
            cout<<"Doubly Linked List is empty ! "<<endl;
            return -1;
        }else{
            return head->val;
        }
    }


    int getattail(){
        if(size==0){
            cout<<"List is empty ! "<<endl;
            return -1;
        }else{
            return tail->val;
        }
    }


    int getatidx(int idx){
        if(idx<0 || idx>size){
            cout<<"Index is invalid ! "<<endl;
            return -1;
        }else if(idx==0) return getathead();
        else if(idx==size-1) return getattail();
        else{
            Node* temp=head;
            for(int i=0; i<idx; i++){
                temp=temp->next;
            }
            return temp->val;
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
    DoublyLinkedList dll;
    dll.insertathead(10);
    dll.insertathead(20);
    dll.insertathead(30);
    dll.insertathead(40);
    dll.insertathead(50);
    dll.insertathead(60);
    dll.insertathead(70);
    dll.insertathead(80);
    dll.display();

    dll.deleteathead();

    dll.display();
    cout<<dll.size<<endl;

    dll.deleteattail();
    dll.display();
    cout<<dll.size<<endl;


    dll.deleteatidx(2);
    dll.insertatidx(3,3000);
    dll.display();
    cout<<dll.size<<endl;


    cout<<dll.getathead()<<endl;
    cout<<dll.getattail()<<endl;
    cout<<dll.getatidx(4)<<endl;

    dll.display();
    cout<<dll.size<<endl;


    dll.deleteathead();
    dll.display();
    dll.deleteattail();
    dll.display();
    dll.deleteatidx(3);
    dll.display();

    cout<<dll.size<<endl;
    dll.display();
    
}

// Done -: 

above code is belongs to doubly linked list -: 
