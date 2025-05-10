// 1-: Use of endl and back slash n ('\n') -:

// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Shivam"<<endl;
//     cout<<"Shiva\n";
//     cout<<"Hello"<<endl;
//     cout<<"ram";
//     cout<<"shyam";
// }



// 2-: Variables -:

// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     x=9;
//     cout<<x;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     x=9;
//     x=5;
//     x=4;
//     cout<<x;
// }




// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     x=9;
//     cout<<x;
//     x=x+5;
//     cout<<x<<endl;
//     x=x-2;
//     cout<<x;
//     x+=5;
//     cout<<x;
// }




// ********  similarly perform all other opertions like (+,-,*,/,% etc) ********* 

// #include<iostream>
// using namespace std;
// int main(){
//     int x=10;
//     cout<<x<<endl;

//     // change in existing values, short-cut -> (x=x*10) == (x*=10)
//     x=x*10;
//     cout<<x<<endl;
//     // or                 
//     x*=20;
//     cout<<x;

//     // calculated values are always store in x becoz the value of x is updated 
// }




// 3-: Operators 

// Arithmetic operators -: 

// #include<iostream>
// using namespace std;
// int main(){
//     int x=13;
//     int y=6;
//     cout<<x+y<<endl;
//     cout<<x-y<<endl;
//     cout<<x*y<<endl;

// // 13/6-> it gives 2 ans which is incorrect becoz we divide int/int not float/float or write 13/6.0 -> use decimal point 
//     cout<<13/6<<endl;
//     cout<<x/y<<endl; 
    
// }



// Use decimal point 
// #include<iostream>
// using namespace std;
// int main(){
//     float x=13;
//     int y=6.0;
//     cout<<x/y<<endl; // now it gives correct ans -> 2.16667
//     // or
//     cout<<13/6.0<<endl;
//     // or
//     cout<<13.0/6<<endl;
// }

// it gives ans in decimal values -: 
// 2.16667
// 2.16667
// 2.16667




// 4-: Increment-Decrement Operators And Comments -: 


// #include<iostream>
// using namespace std;
// int main(){
//     int x=3;
//     cout<<x<<endl;
//     x=x+1;
//     cout<<x<<endl;
//     x+=1;
//     cout<<x<<endl;
//     x++;
//     cout<<x<<endl;
// }




// #include<iostream>
// using namespace std;
// int main(){
//     int x=5;
//     cout<<x<<endl; // 5
//     x++; // post increment 
//     cout<<x<<endl; // 6
//     ++x; // pre increment
//     cout<<x<<endl; // 7
//     x--; // post decrement
//     cout<<x<<endl; // 6
//     --x; // pre decrement
//     cout<<x; // 5
// }




// Importants point about increment ad decrement operators 
// #include<iostream>
// using namespace std;
// int main(){
//     int x=6;
//     cout<<x<<endl; // 6
//     cout<<x++<<endl; // 6
//     cout<<x<<endl; // 7
//     cout<<++x<<endl; // 8
//     cout<<x--<<endl; // 8
//     cout<<x<<endl; // 7
//     cout<<--x<<endl; // 6
//     cout<<x<<endl; // 6
// }





// #include<iostream>
// using namespace std;
// int main(){
//     int x=5;
//     cout<<x<<endl; // 5
//     x++; // post incre x=x+1
//     cout<<x<<endl; // 6
//     ++x; // pre incre x=x+1
//     cout<<x<<endl; // 7
//     x--; // post decre x=x-1
//     cout<<x<<endl; // 6
//     --x; //pre decre x=x-1
//     cout<<x<<endl; // 5
    
// }





// Comments -: Two types -> 1- Single line comment (//), 2- Multi-line comment (/* */) 
// Compiler ignore those parts of the code 

// 1-: Example- Single line comment (//)
// hello world -: this line of code is not run by compiler becoz i am apply single line comment


// 2-: Example- Multi-line comment (/* */)
/*
Comments -: Two types -> 1- Single line comment, 2- Multi-line comment
Compiler ignore those parts of the code 
1-: Example- Single line comment 
hello world -: this line of code is not run by compiler becoz i am apply single line comment 
*/





// 5-: Float data type -: It is used to store decimal or real numbers 
// #include<iostream>
// using namespace std;
// int main(){
//     float x=3.14;
//     cout<<x<<endl;
//     x+=5;
//     cout<<x<<endl;
//     x=x-3;
//     cout<<x<<endl;
//     x+=3.2;
//     cout<<x<<endl;
    

//     float a=3;
//     float b=2;
//     cout<<a/b<<endl;

// }




// 6-: Modulus operator (%) -> It is used to find the remainder

// #include<iostream>
// using namespace std;
// int main(){
//     // int a=5*2; // 1
//     int a=5; // 2
//     int b=3;
//     cout<<a%b<<endl;

//     cout<<100%3<<endl; // 1 
//     cout<<4%4<<endl; // 0



//     // ********* Modulus property-: ********** 
//     // 1-: if a>b or a==b -> a%b -> gives remainder 
//     // 2-: if a<b -> a%b -> gives (a) as a remainder becoz jb hm divide karte h two numbers ko to hmara remainder hmesa divisor se small 
//     // hota hai agar pahle se hi divisor small hai to vo hi hmara remainder ho jata hai 
//     // for ex 20%3 gives 2 remmainder becoz 20/3=6 and rem=2 here 2 is small with 3 so, 2 is final rem, but when we find rem of 2%4 then 
//     // ans is 2 becoz 2 is already small with 4 

//     cout<<2%4<<endl;  // 2
//     cout<<2%58<<endl; // 2
//     cout<<20%3<<endl; // 2

// }
// // some other property of rem is also exist, which is written in the copy.




// Q-: Calculate percentage of 5 subjects
// #include<iostream>
// using namespace std;
// int main(){
//     float a=87.5;
//     float b=56.1;
//     float c=84.9;
//     float d=65.4;
//     float e=78.0;
//     float percent=(a+b+c+d+e)/5;
//     cout<<percent;

// } 




// Q-: Calculate area of a circle -> pi*r^2
// #include<iostream>
// using namespace std;
// int main(){
//     float pi=3.14;
//     float r=2;
//     float area=pi*r*r;
//     cout<<area;
// } 



// 7-: Variable Naming Rules -: already study 
// there are 5 to 7 rules for variable naming 


// Q-: Calculate simple interest -> (p*r*t)/100
// #include<iostream>
// using namespace std;
// int main(){
//     float p=1000;
//     float r=10;
//     float t=2.5;
//     float si=(p*r*t)/100;
//     cout<<si;
// }



// 8-: Boolean Data Type -> It is used to store either true(1)on or false(0)off values
// bool data type give to us -> non-zero quantity gives true(1) and zero quantity gives false(0)
// *********  except zero it gives in all other cases 1(true)  ********** 


#include<iostream>
using namespace std;
int main(){
    // bool a=true;
    // cout<<a; // 1

    // bool flag=false;
    // cout<<flag; // 0

    // bool flag=0;
    // cout<<flag; // 0

    // bool flag=1;
    // cout<<flag; // 1

    // bool flag=45;
    // cout<<flag; // 1

    // bool flag=-36;
    // cout<<flag; // 1

    // bool flag=5.6;
    // cout<<flag;

    // bool flag=0.6;
    // cout<<flag;

    // bool flag=-6.7;
    // cout<<flag;



// bool data type is used for some other expression 
    cout<<(8<3)<<endl;
    cout<<(4>6)<<endl;
    cout<<(5==4)<<endl;

    // in case of equal to(==) here comparison takes place 
    cout<<(8==8)<<endl; // 1

    int x=9;
    int y=9;
    cout<<(x==y)<<endl; // 1
    cout<<(x!=y)<<endl; // 0

    // boolean checks that, is 7 is greater than 3 if yes then it returns true(1) else returns false(0) 
    cout<<(7>3);

// Imp points -: 
    // cout<<(int data type operator int data type);

}

// Done. 
