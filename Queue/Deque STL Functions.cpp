// Q-> Deque STL functions -: built-in deque -: 

#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>dq;
    dq.push_back(10);
    dq.push_front(30);
    // ans so on ... 
    // all the functions you can access by using dq. see 

}


 



// // Implementation of the circular queue -: by using array -: 
// // Circular Queue -:


#include<iostream>
using namespace std;

class Queue{
public:
    int f;
    int b;
    int size;
    int arr[5];

    Queue(){
        f=0;
        b=0;
        size=0;
    }

    // ele. add in the queue from the "back" 
    // and ele. find from the "front" of the queue -: 

    void push(int val){
        if(b==5){
            cout<<"Circular Queue is full ! Overflow ! "<<endl;
            return ;
        }else{
            arr[b]=val;
            b++;
        }
        size++;
    }

    // for removing ele.s from the queue just increase by 1 your front 
    void pop(){
        if(size==0){
            cout<<"Queue is empty ! Underflow ! "<<endl;
            return ;
        }else{
            f++;
        }
        size--;
    }

    int front(){
        if(size==0){
            cout<<"Circular Queue is empty ! Underflow ! "<<endl;
            return -1;
        }else{
            return arr[f];
        }
    }


    int back(){
        if(size==0){
            cout<<"Queue is empty ! Sorry ! "<<endl;
            return -1;
        }else{
            return arr[b-1];
        }
    }


    bool empty(){
        if(size==0) return true;
        else return false;
    }

    // queue's ele. displaying starts from front and going to back. 
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

    q.display();

    cout<<q.front()<<endl;
    cout<<q.back()<<endl;

    q.pop();
    q.pop();
    q.pop();

    q.display();
  
}

// 10 20 30 40 50 
// 10
// 50
// 40 50


