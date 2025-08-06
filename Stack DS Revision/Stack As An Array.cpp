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

