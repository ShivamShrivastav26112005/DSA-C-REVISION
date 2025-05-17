
// Q-> Calculate HCF/GCD (greatest common divisor) of two given no.s -: 
// find those minimum no. which divides both the given no.s 

#include<iostream>
using namespace std;
int gcd(int x, int y){
    int hcf=1;
    for(int i=1; i<=min(x,y); i++){
        if(x%i==0 && y%i==0){ // i is a common factor becoz x is divisible by i and y also 
            hcf=i;
        }
    }
    cout<<hcf;
}
int main(){
    int a=24;
    int b=60;
    gcd(a,b);
}
// 12




// Q-> find the maximum of three given no.s by using fun.
// Method-1 -: by printing the fun. 

#include<iostream>
using namespace std;

int maxi(int a, int b, int c){
    if(a>b && a>c){
        return a;
    }else if(b>a && b>c){
        return b;
    }else{
        return c;
    }
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<maxi(a,b,c);
}


// 25
// 36
// 63
// 63






// Method-2 -: by calling the fun. 
#include<iostream>
using namespace std;

int maxi(int a, int b, int c){
    if(a>b && a>c){
        cout<<a;
    }else if(b>a && b>c){
        cout<<b;
    }else{
        cout<<c;
    }
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    maxi(a,b,c);
}

// 56
// 32
// 28
// 56





// Method-3 -: by using extra variable. 

#include<iostream>
using namespace std;

int maxi(int a, int b, int c){
    int mx=1;
    if(a>b && a>c){
        mx=a;
    }else if(b>a && b>c){
        mx=b;
    }else{
        mx=c;
    }
    cout<<mx;
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    maxi(a,b,c);
}

// 25
// 63
// 32
// 63







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




