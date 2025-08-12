
// Problem -: Stack As An Array And Linked List.


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

    bool isempty(){
        if(n==0) return true;
        else return false;
    }

    bool isfull(){
        if(n==5) return true;
        else return false;
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

    cout<<st.top()<<endl;
    cout<<st.isempty()<<endl;
    cout<<st.isfull()<<endl;

}










// Practice -: 

#include<iostream>
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
            cout<<"Stack is full ";
            return ;
        }
        idx++;
        arr[idx]=val;
    }

    void pop(){
        if(idx==-1){
            cout<<"Stack is empty ";
            return ;
        }
        idx--;
    }

    int top(){
        if(idx==-1){
            cout<<"Stack is empty ";
            return -1;
        }
        return arr[idx];
    }

    void display(){
        for(int i=0; i<=idx; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Stack st;
    
    st.push(10);
    st.push(10);
    st.push(10);
    st.push(10);

    st.pop();
    st.pop();

    st.display();
}






// Practice -: 

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


// Stack is done. 


