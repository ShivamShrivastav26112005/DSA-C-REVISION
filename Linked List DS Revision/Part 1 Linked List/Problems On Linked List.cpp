// Q-: Find the length of loop in cycle of linked list. 
// Make a manual linked list -: 


#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val=val;
        this->next=NULL;
    }
};


// using iterative -:
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
} 

// 10 20 30 40 50 60 
// // using recursion -: 
// void display(Node* head){
//     if(head==NULL) return ;
//     cout<<head->val<<" ";
//     display(head->next);
// } // 10 20 30 40 50 60 


int main(){
    // create a separate nodes -: 
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);
    Node* f=new Node(60);

    // connect those nodes 
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;

    display(a); // pass only head node 
    // 10 20 30 40 50 60 
}







// 2-: Using class -: 

#include<iostream>
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

class LinkedList{
public:
    int size=0;
    Node* head;
    Node* tail;

    LinkedList(){
        size=0;
        head=NULL;
        tail=NULL;
    }

    // using iterative -:
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
    } 
    // 60 50 40 30 20 10

    // // using recursion -: 
    // void display(Node* head){
    //     if(head==NULL) return ;
    //     cout<<head->val<<" ";
    //     display(head->next);
    // } // 60 50 40 30 20 10


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

    void insertCycle(int idx){
        Node* temp=head;
        idx--;
        while(idx--){
            temp=temp->next;
        }
        temp->next->next=head->next;
    }

    int findLength(){ // using 2 pointers (slow, fast pointer) -> x speed, 2x speed. 
        Node* slow=head;
        Node* fast=head->next;
        bool flag=false;
        while(fast!=NULL && fast->next!=NULL){
            if(fast==slow){
                flag=true; // cycle exists 
                break; 
            }
            // means cycle is not exists 
            fast=fast->next->next;
            slow=slow->next;
        }
        int count=1;
        if(flag==false) return 0; // cycle is not exists means return 0
        else // cycle exists 

        slow=slow->next;
        while(slow!=fast){
            count++;
            slow=slow->next;
        }
        return count;
    }

};

int main(){
    LinkedList ll;
    ll.insertathead(10);
    ll.insertathead(20);
    ll.insertathead(30);
    ll.insertathead(40);
    ll.insertathead(50);
    ll.insertathead(60);

    ll.display(); // pass only head node 
    // 60 50 40 30 20 10
    cout<<endl;

    ll.insertCycle(4); // cycle add at idx 4th 
    cout<<ll.findLength();

}


// 60 50 40 30 20 10 
// 4
