Pointer -: A pointer is a variable that stores the memory address of another variable.
int a = 5;
int* ptr = &a; // ptr holds address of a


Basic Pointer Syntax -: 
int a = 10;
int* p = &a;  // p is pointer to int
&a → address of a
*p → value stored at that address (called dereferencing)


Example Code -: 
#include<iostream>
using namespace std;
int main() {
    int x = 20;
    int* ptr = &x;
    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Value of ptr: " << ptr << endl;
    cout << "Value at ptr: " << *ptr << endl;
}



Why Use Pointers?
Access memory directly
Dynamic memory allocation
Function arguments (pass by reference)
Data structures (linked list, trees, etc.)



Pointer to Pointer -: 
Pointer that stores the address of another pointer.
int a = 5;
int* p = &a;
int** q = &p;  // q is pointer to pointer
cout << **q;  // prints 5




Null Pointer -: 
A pointer that points to nothing (safe default)
int* ptr = nullptr;



Pointer Arithmetic -: 
You can add or subtract values:
int arr[] = {1, 2, 3};
int* p = arr;
cout << *p << endl;     // 1
cout << *(p + 1) << endl; // 2



Function with Pointer (Pass by Reference) -: 
void change(int* p) {
    *p = 50;
}
int main() {
    int a = 10;
    change(&a);
    cout << a;  // Output: 50
}



Dynamic Memory (new and delete) -: 
int* p = new int;  // allocate memory
*p = 100;
delete p;  // free memory



Array with Pointers -: 
int arr[3] = {1, 2, 3};
int* p = arr;
cout << *(p + 2);  // 3

