// Problem-1-: 
// Arguments passing -: 

#include<iostream>
using namespace std;

int fun(int x, int y){
    cout<<&x<<endl;
    cout<<&y;
}

int main(){
    int x,y;
    cin>>x>>y;

    // to find the address of the variable, use (&) symbol. 
    cout<<&x<<endl;
    cout<<&y<<endl;

    fun(x,y);
}

// both the address is different 
// 2
// 3
// 0x61ff0c
// 0x61ff08
// 0x61fef0
// 0x61fef4





// Problem-2-:
// Formal parameter and actual parameter -: 
#include<iostream>
using namespace std;

// this x and y is formal parameters
int fun(int x, int y){
    cout<<&x<<endl;
    cout<<&y;
}

int main(){
    int x,y;
    cin>>x>>y;
    cout<<&x<<endl;
    cout<<&y<<endl;
  
    // this x and y is actual parameters
    fun(x,y); // fun. calling 
}




