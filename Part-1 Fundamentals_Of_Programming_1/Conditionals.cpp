// Control Statements -:
// 1-: If Statements -: 


// Q-: Take +ve integer i/p and tell if it is even or odd.
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter a no."<<endl;
//     cin>>x;
//     if(x%2==0){
//         cout<<"even";
//     }
//     if(x%2!=0){
//         cout<<"odd";
//     }
// }



// 2-: If-Else Statements -: 


// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter a no."<<endl;
//     cin>>x;
//     if(x%2==0){
//         cout<<"even";
//     }else{
//         cout<<"odd";
//     }
// }




// // Q-> Take +ve integer i/p and tell if it is divisible by 5 or not.
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cin>>x;
//     if(x%5==0){
//         cout<<"yes";
//     }else{
//         cout<<"no";
//     }
// }


// Q-> Given an integer, print the absolute value of that integer.
// Absolute value is always +ve (mod of that given value)

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     // if(n>0){
//     //     cout<<n;
//     // }else{ // it runs when we take i/p 0 becoz if part is not suitable for 0. In if (n>0) not (n==0)
//     //     cout<<-n;
//     // }

//          // Or 
//     // here, n (variable) is also change
//     if(n<0){
//         n=-n;
//     }
//     cout<<n;
// }



// Q-> Take i/p cost price and selling price. check seller has made profit or loss.
// Also find how much profit or loss seller made.

// #include<iostream>
// using namespace std;
// int main(){
//     int c;
//     cout<<"Cost Price"<<endl;
//     cin>>c;

//     int s;
//     cout<<"Selling price"<<endl;
//     cin>>s;

//     // if(s>c){
//     //     cout<<"Profit"<<endl;
//     //     cout<<s-c;
//     // }else{ // s<=c
//     //     cout<<"loss"<<endl;
//     //     cout<<c-s;
//     // }

//             // OR

//     if(s>c){
//         cout<<"Profit "<<s-c;
//     }
//     if(c>s){
//         cout<<"Loss "<<c-s;
//     }
//     if(s==c){
//         cout<<"No Loss! No Profit!";
//     }

// }



// 2-: Multiple Conditions using &&(and and) and ||(or or) -:
// It is used when we have 2 or more than 2 conditions occurs simultaneously

// && -> if both the conditions are true then it returns true else false 
// || -> if any one of the condition is true then it returns true 



// Q-> Check whether a character is an alphabet or not.
// Think about an ascii values -: 
// #include<iostream>
// using namespace std;
// int main(){
//     char ch;
//     cout<<"Enter the character "<<endl;
//     cin>>ch;
//     cout<<"Display the input character"<<endl;
//     cout<<ch<<endl;
//     // convert into integer then check -:
//     int x=(int)ch;
//     cout<<"Ascii value is "<<x<<endl;

//     // // A -> ascii value -> 65 and Z -> 91
//     // if(x>=65 && x<=90 ){
//     //     cout<<"Yes, Upper case alphabet";
//     // }
    
//     // // a -> ascii value -> 97 and z -> 123
//     // else if(x>=97 && x<=122){
//     //     cout<<"Yes, Lower case alphabet";
//     // }

//     // else{
//     //     cout<<"Not an alphabet";
//     // }


//     // Only check if it is an alphabet or not -:
//     // if((x>=65 && x<=90) || (x>=97 && x<=122)){
//     //     cout<<"Yes";
//     // }else{
//     //     cout<<"No";
//     // }

// }


// 3-: Nested If-Else Statements -: one if-else state. inside another if statement.

// Q-> Take +ve integer i/p and tell if it is divisible by 5 or 3 but not divisible by 15 using nested if-else statements.

// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Enter a no."<<endl;
//     int n;
//     cin>>n;

//     // if((n%5==0 || n%3==0) && n%15!=0){
//     //     cout<<"yes";
//     // }else{
//     //     cout<<"no";
//     // }

//             // OR -: 

// // Nested If-Else Statements-> one if-else inside another if-else, another if-else inside another if-else and so on.
//     if(n%5==0 || n%3==0){
//         if(n%15!=0){
//             cout<<"yes";
//         }else{
//             cout<<"no";
//         }
//     }else{
//         cout<<"no";
//     }
// }


// Q-> Print grade of the student using nested if-else state.
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Enter the marks"<<endl;
//     int m;
//     cin>>m;

//     if(m>=91){ // if it is not run then 
//         cout<<"Excellent";
//     }else{ // then whole else part is run 
//         if(m>=81){
//             cout<<"Very Good";
//         }else{
//             if(m>=71){
//                 cout<<"Good";
//             }else{
//                 if(m>=61){
//                     cout<<"can do better";
//                 }else{
//                     if(m>=51){
//                         cout<<"average";
//                     }else{
//                         if(m>=40){
//                             cout<<"below average";
//                         }else{
//                             if(m<40){
//                                 cout<<"Fail";
//                             }
//                         }
//                     }
//                 }
//             }
//         }
//     }
// }


// Q-> By using if-else statements -: it checks one if part at a time, if true then return inside parts else, jump another/else if parts 
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the marks: ";
    cin>>m;

    if(m>=91){
        cout<<"Excellent";
    }else if(m>=81 && m<=90){
        cout<<"Very Good";
    }else if(m>=71 && m<=80){
        cout<<"Good";
    }else if(m>=61 && m<=70){
        cout<<"Very Good";
    }else if(m>=51 && m<=60){
        cout<<"Good";
    }else if(m>=41 && m<=50){
        cout<<"Very Good";
    }else{
        cout<<"Fail";
    }
    
}