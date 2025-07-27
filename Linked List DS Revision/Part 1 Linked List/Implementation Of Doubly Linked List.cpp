// Implementation Of Doubly Linked List -: 


#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) {
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
        head=tail=NULL;
        size=0;
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
            cout<<"Inndex is invalid ! "<<endl;
            return ;
        }else if(idx==0) insertathead(val);
        else if(idx==size) insertattail(val);
        else{
            Node* temp=head;
            Node* t=new Node(val);
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
            cout<<"Doubly Linked List is Empty ! ";
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
            cout<<"List is Empty ! "<<endl;
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
            cout<<"List is Empty ! "<<endl;
            return;
        }
        else if(idx<0 || idx>=size){
            cout<<"Invalid Index ! Please Check. "<<endl;
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
            cout<<"List is empty ! "<<endl;
            return -1;
        }else{
            return head->val;
        }
    }


    int getattail(){
        if(size==0){
            cout<<"List is Empty ! "<<endl;
            return -1;
        }else{
            return tail->val;
        }
    }


    int getatidx(int idx){
        if(idx<0 || idx>=size){
            cout<<"Please check index is invalid ! "<<endl;
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
    dll.display();

    dll.insertattail(30);
    dll.insertattail(20);
    dll.display();

    dll.insertatidx(2,8000);
    dll.display();
    dll.insertatidx(1,9000);
    dll.display();

    cout<<dll.getathead()<<endl;
    cout<<dll.getattail()<<endl;
    dll.display();

    cout<<dll.getatidx(2)<<endl;
    dll.display();

    dll.deleteathead();
    dll.display();

    dll.deleteattail();
    dll.display();

    dll.deleteatidx(1);
    dll.display();

}


