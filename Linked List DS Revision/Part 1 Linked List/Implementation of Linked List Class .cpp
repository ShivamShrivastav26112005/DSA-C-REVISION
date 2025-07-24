
// Implementation of Linked List class -: 

// There are several functions present in linked list some of them 
// I am making by itself and those function helps me at diff. point of the ll. 


#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

class LinkedList {
public:
    Node* head;
    Node* tail;
    int size;

    LinkedList(){
        head=tail=NULL;
        size=0;
    }


    void insertattail(int val){
        Node* temp=new Node(val);
        if(size==0){
            head=tail=temp;
        }else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }

    void insertathead(int val){
        Node* temp=new Node(val);
        if(size==0){
            head=tail=temp;
        }else{
            temp->next=head;
            head=temp;
        }
        size++;
    }

    
    void insertatidx(int idx, int val){
        if(idx<0 || idx>size){
            cout<<"Invalid Index ! ";
        }
        else if(idx==0) insertathead(val);
        else if(idx==size) insertattail(val);
        else{
            Node* temp=head;
            Node* t=new Node(val);
            for(int i=0; i<idx-1; i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            size++;
        }
    }

    void deleteathead(){
        if(size==0){
            cout<<"List is Empty ! "<<endl;
            return ;
        }else{
            head=head->next;
            size--;
        }
    }


    void deleteattail(){
        if(size==0){
            cout<<"Linked List is empty ! "<<endl;
            return;
        }
        Node* temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        tail=temp;
        size--;
    }


    void deleteatidx(int idx){
        if(size==0){
            cout<<"List is Empty ! "<<endl;
            return;
        }
        else if(idx<0 || idx>=size){
            cout<<"Index is invalid ! "<<endl;
            return;
        }
        else if(idx==0) return deleteathead();
        else if(idx==size-1) return deleteattail();
        else{
            Node* temp=head;
            for(int i=0; i<idx-1; i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;
        }
    }

    int getathead(){
        if(size==0){
            cout<<"Linked List is Empty ! "<<endl;
            return -1;
        }
        return head->val;
    }


    int getattail(){
        if(size==0){
            cout<<"List is also empty ! "<<endl;
            return -1;
        }
        return tail->val;
    }


    int getatidx(int idx){
        if(idx<0 || idx>=size){
            cout<<"Invalid index ! ";
            return -1;
        }
        else if(idx==0) return getathead();
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


    int length(Node* head){
        int s=0;
        Node* temp=head;
        while(temp!=NULL){
            s++;
            temp=temp->next;
        }
        return s;
    }

};

int main(){

    LinkedList ll;
    ll.insertathead(10);
    ll.insertathead(20);
    ll.insertathead(30);
    ll.insertathead(40);

    cout<<ll.size<<endl;
    ll.display();
    cout<<ll.size<<endl;

    ll.insertattail(100);
    ll.insertattail(200);
    cout<<ll.size<<endl;

    ll.display();
    cout<<ll.size<<endl;

    ll.insertatidx(4,40000);
    ll.insertatidx(6,60000);

    ll.display();
    cout<<ll.size<<endl;

}

// 4
// 40 30 20 10 
// 4
// 6
// 40 30 20 10 100 200 
// 6
// 40 30 20 10 40000 100 60000 200
// 8




