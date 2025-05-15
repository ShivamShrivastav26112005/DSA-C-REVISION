
// Scope of Variables -> Limits 
// 1- : Global Variable
// 2- : Local Variable


#include<iostream>
using namespace std;
// this a and b is global variables -: all the fun.s is access, this a and b variables
int a=5;
int b=7;

// normal fun. -> access global vari. 
int f(){
    cout<<a<<" "<<b<<endl;
}

int main(){
    // access global vari. a=5
    cout<<a+6<<endl;
    // this a and b is local variables -: only accessible inside the main fun. 
    int a=3;
    int b=5;
    cout<<a<<" "<<b<<endl;
    // fun. calling but not pass any arguments so, it access global vari. if global vari. is present else
    // give the error: 'a', 'b' was not declared in this scope
    f();
    // it access local vari. 
    cout<<b+5;
}

// 11
// 3 5
// 5 7
// 10





// Default Values Of Arguments -: 
// Make a fun. and take a default value as arguments -:


#include<iostream>
using namespace std;
int sum(int x,int y){
    cout<<x+y;
}
int main(){
    // pass the arguments 4,8
    sum(4,8);
}
// 12




#include<iostream>
using namespace std;
// default values is passed x=4 and y=5, but we pass actual parameter/value so, 
// in x=4, 5 is comes and in y=5, 6 is comes means the value of x is 5 and y is 6 
int sum(int x=4,int y=5){
    cout<<x+y;
}
int main(){
    // pass the parameter 5,6
    sum(5,6);
}
// 11 




#include<iostream>
using namespace std;
// default arguments/values is passed, default value of x is 4 and y is 5 
int sum(int x=4,int y=5){
    cout<<x+y;
}
int main(){
    sum(); // calling the fun. 
}
// 9




#include<iostream>
using namespace std;
// default value of x is 4,y=5, when 5 is passed then the value of x is updated and became x=5 
int sum(int x=4,int y=5){ 
    cout<<x<<" "<<y;
}
int main(){
    // pass the single parameter/value 5 
    sum(5);
}
// 5 5


