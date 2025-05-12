// Combination and Permutation -: 

// Find the combination.

// #include<iostream>
// using namespace std;

// int fact(int x){
//     int fact=1;
//     for(int i=2; i<=x; i++){
//         fact*=i;
//     }
//     return fact;
// }

// int combi(int n, int r){
//     int ncr=fact(n)/(fact(r)*fact(n-r));
//     return ncr;
// }

// int main(){
//     int n;
//     cout<<"Enter n : "<<endl;
//     cin>>n;

//     int r;
//     cout<<"Enter r : "<<endl;
//     cin>>r;

//     cout<<combi(n,r);
// }

// // Enter n : 
// // 4
// // Enter r :
// // 3
// // 4






// Find the Permutation -: 

// #include<iostream>
// using namespace std;

// int fact(int x){
//     int fact=1;
//     for(int i=2; i <=x; i++){
//         fact*=i;
//     }
//     return fact;
// }

// int permu(int n, int r){
//     int npr=fact(n)/fact(n-r);
//     return npr;
// }

// int main(){
//     int n;
//     cout<<"Enter n : "<<endl;
//     cin>>n;

//     int r;
//     cout<<"Enter r : "<<endl;
//     cin>>r;

//     cout<<permu(n,r);
// }

// // Enter n : 
// // 4
// // Enter r :
// // 2
// // 12






// Both are in one fun.

#include<iostream>
using namespace std;

int fact(int x){
    int fact=1;
    for(int i=2; i <=x; i++){
        fact*=i;
    }
    return fact;
}

int permu(int n, int r){
    int npr=fact(n)/fact(n-r);
    return npr;
}

int combi(int n, int r){
    int ncr=fact(n)/(fact(r)*fact(n-r));
    return ncr;
}

int main(){

    int n;
    cout<<"Enter n : "<<endl;
    cin>>n;

    int r;
    cout<<"Enter r : "<<endl;
    cin>>r;

    cout<<permu(n,r);
    cout<<endl;
    cout<<combi(n,r);

}

// Enter n : 
// 4
// Enter r : 
// 3
// 24
// 4

