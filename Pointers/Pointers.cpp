
// Q-> Swap two no.s. with using function. 
// with and without using third vari. 

#include<iostream>
using namespace std;
void swapping(int a, int b){
    // int temp=a;
    // a=b;
    // b=temp;

    // OR -: 

    a=a+b;
    b=a-b;
    a=a-b; 
}
int main(){
    int a=4;
    int b=6;
    cout<<a<<" "<<b<<endl;

    swapping(a,b);
    
    cout<<a<<" "<<b<<endl;

}

//          ****** Not swapped -: ****** 
// ***** becoz this is pass by value not reference(only pass values not address) *****
// ******** if you want, then send their addresses using (Pointers or References) ********
// 4 6
// 4 6



                 // ******* Pointers -: *********


// sizeof() fun. -: to find the size of the data type -: 

#include<iostream>
using namespace std;
int main(){
    cout<<sizeof(int)<<endl;
    cout<<sizeof(float)<<endl;
    cout<<sizeof(char)<<endl;
    cout<<sizeof(double)<<endl;
    cout<<sizeof(bool)<<endl;
    cout<<sizeof(long)<<endl;
    cout<<sizeof(long long)<<endl;
}

// 4
// 4
// 1
// 8
// 1
// 4
// 8




// Address of the variables -: to find the address use (&) symbol. 

#include<iostream>
using namespace std;
int main(){
    int x=5;
    cout<<x<<endl; // 5 -> value of vari. x 
    cout<<&x; // 0x61ff0c -> address of variable x 
} 

// address always changed, if you run same code 10 times then 10 diff. addresses is allocated 
// address is not fixed. 






#include<iostream>
using namespace std;
int main(){
    char ch='s';
    cout<<&ch<<endl; // s►→@ -> address of ch 

    float p=3.14;
    cout<<&p; // 0x61ff08 -> address of p 
}




// To store address -> I am using pointer.
// ****** Introduction To Pointers *******

// Pointers is used to store addresses -: 

#include<iostream>
using namespace std;
int main(){
    int x=5;
    // address of the x vari. by using (&) symbol
    cout<<&x<<endl; // 0x61ff08

    // pointer is used to store address of the x vari. by using (*) symbol 
    int *p=&x;
    cout<<p; // 0x61ff08
}

// 0x61ff08
// 0x61ff08







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

