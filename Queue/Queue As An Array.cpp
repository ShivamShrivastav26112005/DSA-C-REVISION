// // Queue as an array -: 

// // Array implementation of the queue -: 
// // all work done by taking f-b -> f-b is basically a base case 
// // which is used to tell the empty case -: 
// // by taking f-b it says queue is empty or not 


#include<iostream>
#include<queue>
using namespace std;

class Queue { //  user defined data structure -: 
public:
    int f;
    int b;
    int arr[5];

    Queue(){
        f=0;
        b=0;
    }

    void push(int val){ // push ele from the back/rear of the queue 
        if(b==5){
            cout<<"Queue is full ! Overflow ! "<<endl;
            return ;
        }else{
            arr[b]=val;
            b++;
        }
    }

    void pop(){ // remove ele from the front of the queue 
        if(f-b==0){
            cout<<"Queue is empty! Underflow !"<<endl;
            return ;
        }else{
            f++;
        }
    }

    int front(){
        if(f-b==0){
            cout<<"Queue is empty! "<<endl;
            return -1;
        }
        return arr[f];
    }

    int back(){
        if(f-b==0){
            cout<<"Queue is empty ! "<<endl;
            return -1;
        }
        return arr[b-1];
    }

    int size(){
        return b-f;
    }

    int empty(){
        if(f-b==0) return true;
        return false;
    }

    // display array not queue -: so, use for loop for printing ele.s of the array -: 
    // ele. starts for printing "front" of the queue -: 
    void display(){
        for(int i=f; i<b; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};

int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.display();

    q.pop();
    cout<<q.size()<<endl;
    q.display();
    q.pop();

    q.display();
    cout<<q.empty()<<endl;
    cout<<q.back()<<endl;
    cout<<q.front()<<endl;
}

// // Queue is full ! Overflow ! 
// // 10 20 30 40 50
// // 4
// // 20 30 40 50
// // 30 40 50 
// // 0
// // 50
// // 30


