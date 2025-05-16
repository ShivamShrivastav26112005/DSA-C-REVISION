
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
