// basic operations perform on the queues -: 

// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
//     queue<int>q;
//     // operations -: push,pop,front/top,back,size,empty. 
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     cout<<q.front()<<endl;
//     cout<<q.back()<<endl;
//     cout<<q.size()<<endl;
//     q.pop(); // pop/remove/delete always front ele. of the queue 
//     cout<<q.empty()<<endl;
//     cout<<q.size()<<endl;
//     cout<<q.front()<<endl;
//     cout<<q.back()<<endl;

// }
// // 10
// // 50
// // 5
// // 0
// // 4
// // 20
// // 50




// ******* IMP -: *******
// i am always using while loop in the stack.
// and for loop in the queue to display the ele.s. 




// // Display the queue -: 

// // (a)-: normal order or forward direction -> by using the same queue using for loop
// // (b)-: reverse order or backward direction -> by using an extra stack using while loop 


// #include<iostream>
// #include<queue>
// using namespace std;

// // queue is pass by reference (&) to a function. 
// void display(queue<int>& q){
//     int n=q.size();
//     for(int i=0; i<n; i++){ // traverse in the given queue 
//         int x=q.front();
//         cout<<x<<" ";
//         q.pop();
//         q.push(x);
//     }
//     cout<<endl;
// }

// int main(){
//     queue<int>q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     // we make a function display where we pass our (q) to print/display the queue's ele.s 
//     display(q);
//     q.pop();
//     display(q);
// }

// // print from front to back in forward direction or normal order 

// // 10 20 30 40 50 
// // 20 30 40 50 






// Q-: Reverse the queue using a stack.  


// queue is pass by reference to a function just like as stack -: 
// queue is not pass by value to a function, queue is pass by reference to a function -: 
// use (&) symbol while passing queue to a function 


// // queue display by using for loop -:
// // reverse queue by using an extra stack -: 

// #include<iostream>
// #include<queue>
// #include<stack>
// using namespace std;

// void display(queue<int>& q){
//     int n=q.size();
//     for(int i=0; i<n; i++){
//         int x=q.front();
//         cout<<x<<" ";
//         q.pop();
//         q.push(x);
//     }
//     cout<<endl;
// }

// void reverse(queue<int>& q){
//     stack<int>st;
//     // empty the queue into stack -: 
//     while(q.size()>0){
//         int x=q.front();
//         q.pop();
//         st.push(x);
//     }

//     // empty the stack into queue -: 
//     while(st.size()>0){
//         int x=st.top();
//         st.pop();
//         cout<<x<<" ";
//         q.push(x);
//     }

// }

// int main(){
//     queue<int>q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     q.push(60);

//     // cout<<q.front()<<endl;
//     // cout<<q.back()<<endl;
//     // cout<<q.size()<<endl;
//     // q.pop();
//     // cout<<q.front()<<endl;
//     // cout<<q.back()<<endl;
//     // cout<<q.size()<<endl;


//     display(q); // 10 20 30 40 50 60 
//     reverse(q);

// }

// // 10 20 30 40 50 60 
// // 60 50 40 30 20 10



// OR same code -: 



// #include<iostream>
// #include<queue>
// #include<stack>
// using namespace std;

// void display(queue<int>& q){
//     int n=q.size();
//     for(int i=0; i<n; i++){
//         int x=q.front();
//         cout<<x<<" ";
//         q.pop();
//         q.push(x);
//     }
//     cout<<endl;
// }

// void reverse(queue<int>& q){
//     stack<int>st;
//     // empty the queue into stack -: 
//     while(q.size()>0){
//         int x=q.front();
//         q.pop();
//         st.push(x);
//     }

//     // empty the stack into queue -: 
//     while(st.size()>0){
//         int x=st.top();
//         st.pop();
//         q.push(x);
//     }
// }

// int main(){
//     queue<int>q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);

//     display(q); 
//     reverse(q);
//     display(q); 
//     reverse(q);
//     display(q); 

// }

// // 10 20 30 40 50 
// // 50 40 30 20 10
// // 10 20 30 40 50





// Q-> Remove all the ele.s present at even positions in queue. 
// Consider 0-based indexing. 
 

// #include<iostream>
// #include<queue>
// #include<stack>
// using namespace std;

// void display(queue<int>& q){
//     int n=q.size();
//     for(int i=0; i<n; i++){
//         int x=q.front();
//         if(i%2!=0){ // display ele.s of the odd position
//             cout<<x<<" ";
//         }
//         q.pop();
//         q.push(x);
//     }
//     cout<<endl;
// }

// int main(){
//     queue<int>q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);

//     display(q);  

// }

// // 20 40 



// OR -: 



// #include<iostream>
// #include<queue>
// using namespace std;

// void display(queue<int>& q){ // q is pass by reference to a fun. 
//     int n=q.size();
//     for(int i=0; i<n; i++){
//         int x=q.front();
//         q.pop();
//         cout<<x<<" ";
//         q.push(x);
//     }
//     cout<<endl;
// }

// void remove_even(queue<int>& q){
//     int n=q.size();
//     for(int i=0; i<n; i++){

//         // if(i%2==0) q.pop();
//         // else{
//         //     int x=q.front();
//         //     q.pop();
//         //     q.push(x);
//         // }

//         // OR -:

//         if(i%2!=0){
//             int x=q.front();
//             q.push(x);
//         }
//         q.pop();
//     }

// }
// int main(){
//     queue<int>q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     q.push(60);

//     display(q);
//     remove_even(q);
//     display(q);

// }

// // 10 20 30 40 50 60 
// // 20 40 60 





