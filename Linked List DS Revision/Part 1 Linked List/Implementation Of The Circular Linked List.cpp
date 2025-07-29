
// Implementation of the circular linked list -:

#include<iostream>
using namespace std;

class Node {
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


class CircularLinkedList {
public:
    int size;
    Node* head;
    Node* tail;

    CircularLinkedList() {
        size=0;
        head=tail=NULL;
    }

    void insertathead(int val) {
        Node* temp=new Node(val);
        if(size==0){
            head=tail=temp;
            head->next=tail;
            tail->next=head;
        }else{
            temp->next=head;
            head->prev=temp;
            temp->prev=tail;
            tail->next=temp;
            head=temp;
        }
        size++;
    }


    void insertattail(int val) {
        Node* temp=new Node(val);
        if(size==0){
            head=tail=temp;
            tail->next=head;
            head->next=tail;
        }else{
            tail->next=temp;
            head->prev=temp;
            temp->next=head;
            temp->prev=tail;
            tail=temp;
        }
        size++;
    }


    void insertatidx(int idx, int val) {
        if(idx<0 || idx>size){
            cout<<"Index is invalid ! "<<endl;
            return;
        }else if(idx==0) insertathead(val);
        else if(idx==size-1) insertattail(val);
        else{
            Node* temp=head;
            Node* t=new Node(val);
            for(int i=0; i<idx-1; i++){
                temp=temp->next;
            }
            t->next=temp->next;
            t->prev=temp;
            temp->next=t;
            t->next->prev=t;
        }
        size++;
    }


    int getathead(){
        if(size==0){
            cout<<"List is empty ! "<<endl;
            return -1;
        }
        else{
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
            cout<<"Invalid index ! Sorry !"<<endl;
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


    void deleteathead(){
        if(size==0){
            cout<<"List is empty ! "<<endl;
            return ;
        }else{
            head=head->next;
            head->prev=tail;
            tail->next=head;
        }
        size--;
    }

    
    void deleteattail(){
        if(size==0){
            cout<<"List is empty ! Sorry we can not delete the ele. "<<endl;
            return;
        }else{
            tail=tail->prev;
            tail->next=head;
            head->next=tail;
        }
        size--;
    }


    void deleteatidx(int idx){
        if(size==0){
            cout<<"Sorry, List is empty : "<<endl;
            return;
        }
        else if(idx<0 || idx>size){
            cout<<"Index is invalid ! "<<endl;
            return;
        }
        else if(idx==0) deleteathead();
        else if(idx==size-1) deleteattail();
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


    void display(){
        if(size==0){
            cout<<"List is empty ! "<<endl;
            return;
        }
        else{
            Node* temp=head;
            while(true){
            cout<<temp->val<<" ";
            temp=temp->next;
            if(temp==head) break;
        }
        cout<<endl;
        }
    }

};

int main(){
    
    CircularLinkedList cll;
    cll.insertathead(10);
    cll.insertathead(20);
    cll.insertathead(30);
    cll.insertathead(10);

    cll.display();


    cll.insertathead(30);
    cll.insertathead(10);
    cll.display();
    cll.deleteathead();
    cll.display();
    cll.insertathead(30);
    cll.display();

    cll.deleteattail();
    cll.deleteattail();
    cll.deleteattail();
    cll.deleteattail();
    cll.display();


    cll.deleteatidx(2);
    cll.deleteatidx(5);
    cll.display();
    cll.deleteatidx(6);

    cll.display();


    cout<<cll.getathead()<<endl;
    cout<<cll.getattail()<<endl;
    cout<<cll.getatidx(3)<<endl;


    cll.display();
    cll.deleteathead();
    cll.display();
    cll.deleteattail();
    cll.display();
    cll.deleteatidx(1);
    cll.display();

}


// 10 30 20 10 
// 10 30 20 10 
// 30 20 10
// 30 20
// List is empty !


// Done 
