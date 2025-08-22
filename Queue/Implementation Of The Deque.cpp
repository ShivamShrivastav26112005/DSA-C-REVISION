// We have two queues -: 
// 1-> Normal queue -> Already cover. 
// 2-> Deque -> doubly ended queue -> covers in this part 









// deque is implemented by using dll i.e. doubly linked list -: 
// Basic stl functions of the deque -: 

#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int>dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    dq.push_back(50);

    cout<<dq.size()<<endl;

    dq.pop_back();
    dq.pop_back();

    dq.push_back(3000);
    cout<<dq.size()<<endl;

    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;

    dq.push_front(5000);
    dq.push_front(6000);
    cout<<dq.size()<<endl;
}

// 5
// 4
// 10
// 3000
// 6








// Deque is implemented by using doubly linked list -: 

// this is a doubly linked list -: use function accordingly -: 
// Deque -> you can push ele. either front or back, you can also pop ele. either from the front 
// or back that's why deque is implemented by doubly linked list -: 
// some another operations is like front, back, empty 
// and also make a function for displaying the ele.s of the deque -: 



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

// Deque is a user defined data structure -: 
class Deque{ 
public:
    Node* head;
    Node* tail;
    int size;

    Deque(){
        size=0;
        head=tail=NULL;
    }


    // in deque you can push ele. via in both the side 
    // either you can push ele. via front or back also -: 

    // this fun. push the ele. via back -: 
    void pushback(int val){
        Node* temp=new Node(val);
        if(size==0){
            head=tail=temp;
        }else{ // doubly linked list -: 
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
        size++;
    }


    // this fun. push the ele. via front -: 
    void pushfront(int val){
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


    // you can also remove the ele.s from the front or back -: 
    // this fun. is used to remove the ele. from the front -: 

    void popfront(){
        if(size==0){
            cout<<"Deque is empty ! Sorry ! "<<endl;
            return;
        }else{
            head=head->next;
            if(head==NULL) tail=NULL;
            if(head!=NULL) head->prev=NULL;
        }
        size--;
    }


    void popback(){
        if(size==0){
            cout<<"Deque is empty ! Sorry ! "<<endl;
            return ;
        }else if(size==1){
            popfront();
            return ;
        }else{
            Node* temp=tail->prev;
            temp->next=NULL;
            tail=temp;
        }
        size--;
    }


    int front(){
        if(size==0){
            cout<<"Deque is empty ! Underflow ! "<<endl;
            return -1;
        }else{
            return head->val;
        }
    }


    int back(){
        if(size==0){
            cout<<"Deque is empty ! Sorry We can not remove the ele.s! 
              Underflow cond. is meet. "<<endl;
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


int main(){
    Deque dq;
    dq.pushback(10);
    dq.pushback(20);
    dq.pushback(30);
    dq.pushback(40);
    dq.display();

    dq.popback();
    dq.display();

    dq.popfront();
    dq.display();

    dq.pushfront(50);
    dq.display();
    
    cout << dq.front();
    cout << endl;
    cout << dq.back();
}

// 10 20 30 40 
// 10 20 30 
// 20 30 
// 50 20 30 
// 50
// 30




// Using class implementation -: 

class MyCircularDeque { // Implementation of Deque using DLL -: 
public:
    
    // Node definition for doubly linked list
    class Node {
    public:
        int val;
        Node* next;
        Node* prev;

        // Constructor -: 
        Node(int val) {
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
    };
    
    // Put on the DLL -: 
    Node* head;
    Node* tail;
    int size;    // current number of ele.s in the deque
    int capacity; // Maximum capacity of deque

    // Constructor
    MyCircularDeque(int capacity) {
        this->head = NULL;
        this->tail = NULL;
        this->size = 0;
        this->capacity = capacity;
    }
    
    // Insert at the front of the deque
    bool insertFront(int value) {
        if (size == capacity) return false; // Deque is full
        Node* temp = new Node(value);
        if (size == 0) {
            head = tail = temp;
        } else {
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        size++;
        return true;
    }
    
    // Insert at the back of the deque
    bool insertLast(int value) {
        if (size == capacity) return false; // Deque is full
        Node* temp = new Node(value);
        if (size == 0) {
            head = tail = temp;
        } else {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        size++;
        return true;
    }
    
    // Delete from the front of the deque
    bool deleteFront() {
        if(size==0){
            return false; // Deque is empty
        }else{
            head=head->next;
            if(head==NULL) tail=NULL;
            if(head!=NULL) head->prev=NULL;
        }
        size--;
        return true; 
    }
    
    // Delete from the back of the deque
    bool deleteLast() {
        if(size==0){
            return false;
        }
        if(size==1){
            deleteFront();
            return true;
        }else{
            Node* temp=tail->prev;
            temp->next=NULL;
            tail=temp;
        }
        size--;
        return true;
    }
    
    // Get the value from the front
    int getFront() {
        if(size==0){
            return -1;
        }else{
            return head->val;
        }
    }
    
    // Get the value from the back
    int getRear() {
        if(size==0){
            return -1;
        }else{
            return tail->val;
        }
    }
    
    // Check if the deque is empty
    bool isEmpty() {
        if(size==0) return true;
        else return false;
    }
    
    // Check if the deque is full
    bool isFull() {
        if(size!=capacity) return false;
        else return true;
    }
};


