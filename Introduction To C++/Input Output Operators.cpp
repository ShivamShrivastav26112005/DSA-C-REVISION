// Input in c++ by using -> cin function 
// you can give input in the terminal where output is displayed .

// Taking Input -:

// #include<iostream>
// using namespace std;
// // this is main fun. and compiler read the code line by line 
// int main(){
//     int x;
//     cout<<"Enter a number"<<endl;
//     cin>>x;
//     cout<<"Input is"<<endl;
//     cout<<x;
// }



// // square of a given number
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter the no. for sq."<<endl;
//     cin>>x;
//     int sq=x*x;
//     // cout<<"Sq. is "<<endl;
//     // cout<<sq;
//             // or 
//     cout<<"Sq. is "<<sq;
// }




// // area of the circle 
// #include<iostream>
// using namespace std;
// int main(){
//     float r;
//     cout<<"Enter the radius "<<endl;
//     cin>>r;
//     float area=3.14*r*r;
//     cout<<area;
// }




// // sum of two given no.s 
// #include<iostream>
// using namespace std;
// int main(){
//     // int a;
//     // cout<<"Enter first no. "<<endl;
//     // cin>>a;
//     // int b;
//     // cout<<"Enter second no. "<<endl;
//     // cin>>b;
//     // int sum=a+b;
//     // cout<<"Sum is "<<endl;
//     // cout<<sum;


//     int a,b;
//     cin>>a>>b;
//     cout<<a+b;
// }




// // Types of Operators -:
// // 1-> Relational operators -: gives ans either true or false 
// #include<iostream>
// using namespace std;
// int main(){
//     int x=3;
//     // relational operator-:
//     // it is a boolean expression either it is ture or false 
//     cout<<(x==4)<<endl;

//     // assignment operator-:
//     // update the value from x=3 to x=4 and print updated value 
//     cout<<(x=4);
// }




// char data type -: store single character 

// #include<iostream>
// using namespace std;
// int main(){
//     // // this is basically a text or character enclosed in single inverted commas  
//     // char ch ='a';
//     // cout<<ch; // a

//     // char chh='!';
//     // cout<<chh;

//     // char c='%';
//     // cout<<c;

//     // this is a character not a number 
//     char ch='1';
//     cout<<ch;

//     // this is a number not a character 
//     cout<<1+2;

//     // this is a text not a number or character 
//     cout<<"1+2";

//     // double quote is used to store multiple things, it is a string 
//     // single quote is used to store single character/word/letter only 
// }




// // ASCII values -:
// #include<iostream>
// using namespace std;
// int main(){
//     // char ch='a';
//     // cout<<(int)ch; // ascii value of small a is 97

//     // char ch='A';
//     // cout<<(int)ch; // ascii value of capital A is 65

//     char ch='0';
//     cout<<(int)ch; // ascii value of 0 is 48
// }





// // Type Casting in c++ -:
// #include<iostream>
// using namespace std;
// int main(){
//     // float x=7.1;
//     // cout<<x<<endl;


//     // // type cast from float to int data type -: 
//     // // int y is a new box / naya dabba 
//     // int y=(int)x; // read-> y is equal to int of x 
//     // cout<<y;



//     // bool flag=true;
//     // int a=(int)flag; // 1
//     // cout<<a+5; // 1+5=6


//     // char ch='A'; // single character-
//     // // type casting takes place
//     // int x=(int)ch; 
//     // cout<<x<<endl; // 65
//     // cout<<x+5; // 65+5=70



//     // ******* OR CONVERT AUTOMATICALLY ******** -: 
//     // char ch='a';
//     // cout<<ch+3<<endl; // 100

//     // but you write with proper syntax-: 
//     char ch='a';
//     int x=(int)ch;
//     cout<<x+3<<endl; // 100
//          // or
//     cout<<(int)ch+100; // 97+100=197

// }




// Q-> take integer i/p and print half of the no. 
// type casting ques.

#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a no."<<endl;
    cin>>x;
    // type cast to float 
    float y=(float)x;
    cout<<"Half of the no. is "<<y/2;
}


// Done 
