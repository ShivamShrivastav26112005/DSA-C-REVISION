// Introduction to linked list -: Idea of linking two non-contiguous memory locations (nodes). 


// ****** Kisi bhi Node ko Node* me hi store karte hai. ******* 

// Creation of a linked list -: 
// class -> user defined data type. 
// class Node -> user defined data type. 
// class Vector or class LinkedList -> user defined data structure. 



// Linked List Making -: 

#include<iostream>
using namespace std;

// we make our own data type named Node
class Node{
public:
    int val;
    Node* next;

    // constructor -:
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

int main(){
    // creation of new node -:
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    Node e(50);

    // forming ll -: 
    // connection from one node to another node 
    a.next=&b;
    b.next=&c;
    c.next=&d;
    d.next=&e;

    // printing node's value 
    cout<<(a.next)->val<<endl; // 20 
    cout<<((a.next)->next)->val<<endl; // 30 

    // OR -: address of b -> (*a.next)
    // printing address wise -:
    cout<<((*a.next).next)->val<<endl; // 30 
    cout<<(*(*a.next).next).next->val<<endl; // 40 

    // OR -:
    cout<<(((a.next)->next)->next)->val<<endl; // 40 

    // printing whole node's values -: 
    // print linked list -: 

    // printing using dot(.) operator -: 
    Node temp=a;
    while(1){
        cout<<temp.val<<" ";
        if(temp.next==NULL) break;
        temp=*(temp.next); 
    }
    // 10 20 30 40 50 

            // OR -: 
    
    // Not use dot(.) operator always use pointer (->) operator. 
    
}





// Not use dot(.) operator always use pointer (->) operator. 
// i am always using pointer in linked list and (->) arrow operator not using (.) dot operator. 
// use of pointers, use of arrow(->) operator not use of dereference operator (*)

#include<iostream>
using namespace std;

class Node{ // Linked List class Node -: 
public:
    int val;
    Node* next;

    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

int main(){
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);

    a->next=b;
    b->next=c;
    c->next=d;

    // printing values of the ll or list with the help of temporary node -:
    // display() fun. -: 
    Node* temp=a;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    // 10 20 30 40
    cout<<endl;

    // printing separate value of the linked list 
    cout<<a->next->val<<endl;  // 20
    cout<<a->next->next->val<<endl;  // 30
    cout<<a->next->next->next->val<<endl;  // 40

}






// Normal Linked List -: 

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

void display(Node* head){

    // printing linked list with the help of temp Node 
    // temp node is traversing in the whole ll and print values one by one
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;

}

int size(Node* head){
    Node* temp=head;
    int size=0;
    while(temp!=NULL){
        size++;
        temp=temp->next;
    }
    return size;
}

// TC=SC=O(n) becoz making a call stack or recursive call stack -:

void displayrec(Node* head){
    if(head==NULL) return ;
    cout<<head->val<<" ";
    displayrec(head->next);
}


void displayrec_rev(Node* head){
    if(head==NULL) return ;
    displayrec_rev(head->next);
    cout<<head->val<<" ";
}


int main(){
    // create new node 
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);

    // connection or linking from one node to another node -: 
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;

    // display ll in normal ways -: 
    display(a);

    cout<<size(a)<<endl;

    // display ll in recursive ways -: 
    displayrec(a);
    cout<<endl;
    displayrec_rev(a);


}

// 10 20 30 40 50 
// 5
// 10 20 30 40 50
// 50 40 30 20 10


