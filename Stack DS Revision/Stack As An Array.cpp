// Array Implementation Of The Stack -:
// Stack as an array -: 


// now here you can also seen a "user defined data structure" -: 
// here class "stack" is a "user defined data structure" -: 
// Array Implementation -> Make a new array (int arr[5]), size of the array (n), 
// idx of the array (idx) in the class.




#include<iostream>
#include<stack>
using namespace std;

// stack is a user defined data structure -: 
class Stack{
public:
    int arr[5]; // i am making an array of fix size then we can increase size by adding ele.s 
    int n=sizeof(arr)/sizeof(arr[0]);
    int idx;

    Stack(){
        idx=-1;
    }

    void push(int val){
        if(idx==5){
            cout<<"Stack is full ! Overflow "<<endl;
            return ;
        }else{
            idx++;
            arr[idx]=val;
        }
    }

    void pop(){
        if(idx==-1){
            cout<<"Stack is empty ! Underflow "<<endl;
            return ;
        }else{
            idx--;
        }
    }

    int top(){
        if(idx==-1){
            cout<<"Stack is empty ! Underflow ! "<<endl;
            return -1;
        }else{
            return arr[idx];
        }
    }

    int size(){
        return idx+1;
    }

    void displayarr(){
        for(int i=0; i<=idx; i++){
            cout<<arr[i]<<" ";
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

    cout<<st.top()<<endl;
    st.displayarr();

    st.pop();
    st.displayarr();
    st.pop();
    st.displayarr();

    cout<<st.top()<<endl;

    st.push(60);
    st.push(70);
    st.displayarr();
    cout<<st.top();
}


// 50
// 10 20 30 40 50
// 10 20 30 40
// 10 20 30
// 30
// 10 20 30 60 70
// 70






#include<iostream>
#include<stack>
using namespace std;
class Stack{
public:
    int arr[5];
    int n=sizeof(arr)/sizeof(arr[0]);
    int idx;

    Stack(){
        idx=-1;
    }

    void push(int val){
        if(idx==5){
            cout<<"Stack is full ! Overflow ! "<<endl;
            return ;
        }else{
            idx++;
            arr[idx]=val;
        }
    }


    void pop(){
        if(idx==-1){
            cout<<"Stack is empty! Underflow ! "<<endl;
            return ;
        }else{
            idx--;
        }
    }

    int top(){
        if(idx==-1){
            cout<<"Stack is empty ! Underflow ! "<<endl;
            return -1;
        }else{
            return arr[idx];
        }
    }

    int size(){
        return idx+1;
    }

    void display(){
        // display ele.s of the stack -:
        for(int i=0; i<=idx; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void displayRev(){
        for(int i=idx; i>=0; i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }


};
int main(){

    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);

    st.display();
    st.displayRev();

    cout<<st.top()<<endl;

    st.pop();
    st.display();

    cout<<st.size()<<endl;

    cout<<st.top()<<endl;

}

// 10 20 30 
// 30 20 10
// 30
// 10 20
// 2
// 20











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

