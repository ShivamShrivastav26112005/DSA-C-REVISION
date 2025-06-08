// Passing Array to functions -: 
// Array -> Pass by reference (address of the array is passed to a function and pointer is used to store address)


// Array is passed by reference means array ka address pass hota hai 
// pura array ki values pass nhi hoti only address pass hota hai array ka 
// vo bhi array ke 1st ele. ka address pass hota hai.


// pass address of 1st ele. of the array to the function and in the fun. pointer is used to store those array'address.

// ex-:

#include<iostream>
using namespace std;

int display(int a[], int n){ // a is pointer/array to store address/of 1st ele. of the array arr 
    cout<<"Display the array'ele.s : ";
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[]={1,3,2,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    // fun. calling 
    display(arr,n); // arr is a address, passing address of the array arr 
}

// Display the array'ele.s : 1 3 2 4 5 







// Array -> Pass By Reference -:
// display and change the values of the array -: 

#include<iostream>
using namespace std;

int display(int a[], int n){ // a is pointer used to store address of the array arr
    cout<<"Display the array'ele.s : ";
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int change(int b[], int n){ // b is a pointer array -> store -> address 
    b[0]=100;
}

int main(){
    int arr[]={1,3,2,4,5};
    // n is size of the array 
    int n=sizeof(arr)/sizeof(arr[0]);

    // fun. calling 
    display(arr,n); // arr is a address of the array arr which is passed 
    change(arr,n); // address of the array is passed 
    display(arr,n);

}

// Display the array'ele.s : 1 3 2 4 5 
// Display the array'ele.s : 100 3 2 4 5 










// Arrays And Pointers -: 

// Make a character array and print all the characters.

#include<iostream>
#include<climits>
using namespace std;
int main(){
    char arr[]={'a','b','c','d','e'};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

// a b c d e 








// You can also make a floating arrays, boolean arrays, double arrays etc. 

#include<iostream>
#include<climits>
using namespace std;
int main(){

    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    // both are ture to give the address of the array arr to ptr pointer 
    int *ptr=arr; // arr array ke 1st ele.(1) ke 1st byte ka address store hua ptr pointer me
    // int *ptr=&arr[0]; 

    // // Both are gives an error, wrong method to give the address of the array arr to a pointer ptr 
    // int *ptr=&arr;
    // int *ptr=arr[0];

    // arr, &arr[0] -> address but arr[0] -> integer 
    cout<<arr<<endl;
    cout<<ptr<<endl;
    cout<<&arr[0]<<endl;
    cout<<&arr<<endl;

    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    // pointer ptr is used to store the add. of the 1st ele. of array arr 
    int *ptr=arr;

    // print the add. of the array arr 
    cout<<ptr<<endl; // 0x61fef4

    // print the 1st ele. of the array arr becoz ptr pointer is stored only add. of the 1st ele. 
    cout<<*ptr<<endl; // 1 

    // to print whole ele.s of the array arr used loops
    for(int i=0; i<n; i++){
        cout<<*ptr<<" "; // 1 2 3 4 5
        ptr++;
    }

    // ptr -> store the add, *ptr -> print the ele. of that add.(add. of 1st ele.)

// 0x61fef0
// 1
// 1 2 3 4 5

}

// // 0x61fef4
// // 0x61fef4
// // 0x61fef4
// // 0x61fef4








// IMP -> concept -: 
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};    
    int n=sizeof(arr)/sizeof(arr[0]);

    int *ptr=arr;
    cout<<ptr<<endl; // 0x61fef4

    // ***** this ptr is accessed to entire array *****
    cout<<*ptr<<endl; // print 1st ele. of the array -> 1
    cout<<ptr[4]<<endl; // 5

    // change/update the ele. using pointer 
    ptr[0]=8;

    // to print whole ele.s of the array arr used loops
    for(int i=0; i<n; i++){
        cout<<ptr[i]<<" "; // 8 2 3 4 5
    }
  
}






