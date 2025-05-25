

// Pointer Arithmetic -: 
// Increment and decrement -: 

#include<iostream>
using namespace std;
int main(){
    int x=5;
    cout<<x<<endl;

    int *ptr=&x;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    // address is increased by 4 bytes 
    ptr=ptr+1;
    cout<<ptr<<endl;

}

// 5
// 0x61ff08
// 5
// 0x61ff0c





// Post incre, post decre, pre incre, pre decre. in pointers -:

#include<iostream>
using namespace std;
int main(){
    int x=4;
    int *ptr=&x;
    cout<<*ptr<<endl; // 4

    // pre incre.
    ++(*ptr); // ++(*ptr) == *ptr=*ptr+1
    cout<<*ptr<<endl; // 5

    // post incre.
    (*ptr)++;
    cout<<*ptr<<endl; // 6

    // pre decre.
    int b=--(*ptr);
    cout<<*ptr<<", b is : "<<b<<endl; // 5, b is : 5

    // post decre.
    (*ptr)--;
    cout<<*ptr<<endl; // 4

}





 
// Q-> WA Function to find out the first and last digit of a no. 
// used pointer concept here, 

#include<iostream>
using namespace std;

int find(int n,int *p1,int *p2){
    // last digit 
    *p2=n%10;

    // first digit     
    while(n>9){
        n/=10;
    }
    *p1=n;
}
int main(){
    int n;
    cout<<"Enter the number n : "<<endl;
    cin>>n;

    int first,last;
    
    int *p1=&first;
    int *p2=&last;

    find(n,p1,p2);

    cout<<first<<endl<<last;
}






// Null Pointer -: Used in linked list -:

#include<iostream>
using namespace std;
int main(){
    // int *ptr=NULL; 
    // cout<<&ptr<<endl; // 0x61ff0c
    // cout<<ptr<<endl // 0 (null)

    // // \0 -> null character -> ascii value is 0
    // char ch='\0';
    // cout<<(int)ch<<endl; // 0

    int *ptr1=NULL;
    int *ptr2=0;
    int *ptr3='\0';
    cout<<ptr1<<" "<<ptr2<<" "<<ptr3;

}
// this is reversed address and value 
// 0 0 0







// Double Pointers -: Used to store address of the single pointer.
// Triple Pointers -: 

#include<iostream>
using namespace std;
int main(){
    int x=5;
    int *ptr1=&x;
    int **ptr2=&ptr1;
    int ***ptr3=&ptr2;

    // cout<<x<<" "<<*ptr1<<" "<<**ptr2<<" "<<***ptr3; // 5 5 5 5
    
    cout<<&x<<" "<<&ptr1<<" "<<&ptr2<<" "<<&ptr3; // 0x61ff0c 0x61ff08 0x61ff04 0x61ff00
}


// Complete Pointers In C++. 

