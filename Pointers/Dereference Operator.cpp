
// ****** Dereference operator -> (*) ******  


// Pointers example -:
// integer ka address integer pointer me store hoga, float ka float me and so on  

#include<iostream>
using namespace std;
int main(){
    int x=5;
    int *p=&x;
    cout<<x<<endl; // 5
    cout<<&x<<endl; // 0x61ff08
    cout<<p<<endl; // 0x61ff08

    cout<<endl;

    float f=3.14;
    cout<<&f<<endl; // 0x61ff00
    float *ptr=&f; 
    cout<<ptr; // 0x61ff00
}




// * -: This is dereference operator.
// update the value of x with using x and without using x (means by using pointers/dereference operator (*) ) 

#include<iostream>
using namespace std;
int main(){
//     int x=5;
//     cout<<x<<endl;
//     cout<<&x<<endl;

//     // address of x is stored in the pointer 
//     int *ptr=&x;

//     cout<<ptr<<endl;
//     cout<<*ptr<<endl;

//     cout<<endl<<endl;

// // 5
// // 0x61ff08
// // 0x61ff08
// // 5

//     // update the value of x without using pointers (by using x) -:
//     int x=5;
//     x=6;
//     cout<<x<<endl;
//     cout<<&x<<endl;

//     int *p=&x;

//     cout<<p<<endl;
//     cout<<*p<<endl;

// // 6
// // 0x61ff08
// // 0x61ff08
// // 6

    // update the value of x with using pointers (without using x) -:
    int x=5;
    cout<<x<<endl;
    cout<<&x<<endl;

    int *p=&x;

    cout<<p<<endl;
    cout<<*p<<endl;
    
    // update the value -
    *p=6;

    cout<<p<<endl;
    cout<<*p<<endl;
}



// Q-> Sum of two no.s using pointers (*) -: 


#include<iostream>
using namespace std;
int main(){
    int a=5;
    int b=6;

    int *p=&a;
    int *q=&b;

    int sum=*p+*q;
    cout<<sum;

}





// By taking user input -: without using * operator 
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a and b : "<<endl;
    cin>>a>>b;

    int *p=&a;
    int *q=&b;

    int sum=*p+*q;
    cout<<sum;
}

// Enter a and b : 
// 10
// 10
// 20





// by taking user input -: with using (*) dereference operator 
#include<iostream>
using namespace std;
int main(){
    int a,b;

    int *p=&a;
    int *q=&b;

    cout<<"Enter a and b : "<<endl;
    cin>>*p>>*q;

    int sum=*p+*q;
    cout<<sum;

}

// Enter a and b : 
// 5
// 9
// 14
