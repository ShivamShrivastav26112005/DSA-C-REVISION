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
