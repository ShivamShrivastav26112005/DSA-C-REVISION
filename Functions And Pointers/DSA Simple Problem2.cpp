
// Q-> Print the factorials of first n numbers. 
// Method-1 -: 

#include<iostream>
using namespace std;

int fact(int n){
    int fact=1;
    for(int i=2; i<=n; i++){
        fact*=i;
    }
    cout<<fact<<endl;
}

int main(){
    // only used for taking a i/p -: 
    int n;
    cout<<"Enter n : "<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
        fact(i);
    }

}

// Enter n : 
// 5
// 1
// 2
// 6
// 24
// 120









// Method-2 -: 
#include<iostream>
using namespace std;
int fact(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact*=i;
        cout<<fact<<endl;
    }
}

int main(){
    // only used for taking a i/p -: 
    int n;
    cout<<"Enter n : "<<endl;
    cin>>n;

    fact(n);

}

// Enter n : 
// 5
// 1
// 2
// 6
// 24
// 120










// Q-> Swap two no.s. without using function. 
// 1-: With using third variables.
  
#include<iostream>
using namespace std;
int main(){
    int a=3;
    int b=4;
    cout<<a<<" "<<b<<endl;
    int temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b;
}

// 3 4
// 4 3







// 2-: Without using third variables.
#include<iostream>
using namespace std;
int main(){
    int a=3;
    int b=4;
    cout<<a<<" "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<" "<<b;
}

// 3 4
// 4 3








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


// -> Go to Pointers file, for further understanding -: 


// Done -: 11-05-25 
