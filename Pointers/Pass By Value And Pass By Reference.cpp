
// ******* Pass by value and pass by reference -: *********



// 1-: Pass by value -: 
// ex-> swapping two no.s -:

#include<iostream>
using namespace std;
int swapping(int x, int y){
    int temp=x;
    x=y;
    y=temp;
}
int main(){
    int x=4;
    int y=5;
    cout<<x<<" "<<y<<endl;
    swapping(x,y);
    cout<<x<<" "<<y<<endl;
}

// ***** no. is not swapped *****
// 4 5
// 4 5







// 2-: Pass by reference-: 
// ex-> swapping two no.s -:

// x -> integer variable 
// &x -> address of x, which is stored in the pointer 
// *x -> pointer, which stores only adddress 
// integer store only integer values, boolean stroes only boolean values like that pointers store only pointers values -: 

#include<iostream>
using namespace std;
int swapping(int *x, int *y){
    int temp=*x; // integer(temp) stores integer(*x) values
    *x=*y; // pointer(*x) store pointers(*y) values 
    *y=temp; // integer(*y) stores integer(temp) value
}
int main(){
    int x=4;
    int y=5;
    cout<<x<<" "<<y<<endl;
    swapping(&x,&y);
    cout<<x<<" "<<y<<endl;
}

// ***** no. is swapped *****
// 4 5
// 5 4



// OR -> Simple Method -: Pass by reference -> sasta wala -: 



#include<iostream>
using namespace std;
int swapping(int &x, int &y){
    int temp=x; 
    x=y; 
    y=temp; 
}
int main(){
    int x=4;
    int y=5;
    cout<<x<<" "<<y<<endl;
    swapping(x,y);
    cout<<x<<" "<<y<<endl;
}

// 4 5
// 5 4




