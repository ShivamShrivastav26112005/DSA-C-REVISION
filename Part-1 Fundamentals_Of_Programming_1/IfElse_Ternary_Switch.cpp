// ***** If-else, Ternary and Switch Operators-: ***** 

// #include<iostream>
// using namespace std;
// int main(){
//     int x=10,y=20;
//     // this is a separate expression 
//     if(x==y); // ***** becoz here use (;) i.e. full stop, go for next expression *****
//     // this is also a separate expression not include in if parts, it includes only iff, they enclosed in clurly brackets 
//         cout<<x<<" "<<y;
//     return 0;
    
// } // R-: 10 20 



// #include<iostream>
// using namespace std;
// int main(){
//     int x=3,y=5;
//     if(x==3) // true 
//         cout<<x<<endl; // then print x,  i.e.-> 3
//     else; // here, used semi colon means full stop, after writing (;) all state. is new.
//         cout<<y<<endl; // this is new expression 
//     return 0;
// }

// // Output-: 
// // 3
// // 5



// 1-: Ternary Operators -: Short-cut of if-else state.
// // Ex. of if-else state.-:

// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cin>>x;
//     if(x%2==0){
//         cout<<"even";
//     }else{
//         cout<<"odd";
//     }
// }



// 1-: Ternary operator-: syntax-: condition ? true : false
// *** In ternary operator don't need to write if or else word ***

// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cin>>x;
//     (x%2==0) ? cout<<"even" : cout<<"odd";
// }




// 2-: Switch Statements -> Alternative of if-else statement.

// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter the number ";
//     cin>>x;

//     switch(x){
//         case 1:
//         cout<<"Ok";
//         break;

//         case 2:
//         cout<<"Hi";
//         break;

//         case 3:
//         cout<<"hii";
//         break;

//         default:
//         cout<<"Invalid";
//     }
// }





// // Q-> I/P week no. and print day by using switch case ?
// #include<iostream>
// using namespace std;
// int main(){
//     int week;
//     cout<<"Enter day number ";
//     cin>>week;

//     switch(week){
//         case 1:
//         cout<<"Monday";
//         break;
//         case 2:
//         cout<<"Tuesday";
//         break;
//         case 3:
//         cout<<"Wednesday";
//         break;
//         case 4:
//         cout<<"Thursday";
//         break;
//         case 5:
//         cout<<"Friday";
//         break;
//         case 6:
//         cout<<"Saturday";
//         break;
//         case 7:
//         cout<<"Sunday";
//         break;
//         default:
//         cout<<"Invalid number";
//     }
// }






// // Q-> I/P month no. and print total no. of days in month by using switch case ?
// #include<iostream>
// using namespace std;
// int main(){
//     int month;
//     cout<<"Enter day number ";
//     cin>>month;

//     switch(month){
//         case 1:
//         cout<<"January "<<"31";
//         break;
//         case 2:
//         cout<<"28";
//         break;
//         case 3:
//         cout<<"31";
//         break;
//         case 4:
//         cout<<"30";
//         break;
//         case 5:
//         cout<<"31";
//         break;
//         case 6:
//         cout<<"30";
//         break;
//         case 7:
//         cout<<"31";
//         break;
//         case 8:
//         cout<<"31";
//         break;
//         case 9:
//         cout<<"30";
//         break;
//         case 10:
//         cout<<"31";
//         break;
//         case 11:
//         cout<<"30";
//         break;
//         case 12:
//         cout<<"31";
//         break;
//         default:
//         cout<<"Invalid number";
//     }
// }





// // Q-> Basic calculator using switch statements ?
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"Enter the first and second number "<<endl;
//     cin>>a>>b;

//     char ch;
//     cout<<"Enter the operator ";
//     cin>>ch;

//     switch(ch){
//         case '+':
//             cout<<a+b;
//             break;
//         case '-':
//             cout<<a-b;
//             break;
//         case '*':
//             cout<<a*b;
//             break;
//         case '/':
//             cout<<a/b;
//             break;
//     }
// }




// // The Real Thing -: 
// // Syntax-:

// if(condition)
//    statement; // it runs 

// if(expression)
//    statement; // it also runs 


// for ex-:
#include<iostream>
using namespace std;
int main(){
    int a;

    // you can write this also -> if(3+2%5) == if(5) it means ture i.e. (1) in boolean then print next state.
    if(3+2%5) // precedence works here (% > +), syntax of if-else -: if(condi)-> if(condi. is ture) then jump to next state. or print something
        cout<<"this works"<<endl;
        cout<<(3+2%5)<<endl; // run->5 => 3+(2%5) -> 2%5=2 -> 3+2 -> 5(ans)

    if(a=10) //  non-zero no. so, next state. is displayed/print, or int a=10 and if(a) then next state. is printed 
        cout<<"this also works"<<endl;

    if(-5) // print also -5 is a non-zero no. 
        cout<<"this is also works"<<endl;

    if(0) // except 0 all things works 
        cout<<"this is not works/not print"<<endl;
}

// Output-: 

// this works
// this also works
// this is also works
