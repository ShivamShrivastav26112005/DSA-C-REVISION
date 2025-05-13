// Q-> Pascal Triangle-: Algo-: Used combination and two for loops for printing triangle (i=1 to n and j=1 to i)

// Used combination to print the pascal triangle 
//      1
//     1 1
//    1 2 1
//   1 3 3 1
//  1 4 6 4 1
// 1 5 10 10 5 1



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

//     // for printing in triangle format -:
//     for(int i=0; i<=n; i++){
//         for(int j=0; j<=i; j++){
//             cout<<combi(i,j)<<" ";
//         }
//         cout<<endl;
//     }

// }

// // Enter n : 
// // 5
// // 1
// // 1 1
// // 1 2 1
// // 1 3 3 1
// // 1 4 6 4 1
// // 1 5 10 10 5 1 









// Optimize ways to print pascal triangle by using formula -: 
// Formula -: pascal = ncr*((n-r)/(r+1))

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : "<<endl;
    cin>>n; 

    for(int i=0; i<=n; i++){ // i = n
        int curr=1;
        for(int j=0; j<=i; j++){ // j = r
            cout<<curr<<" ";
            curr=curr*(i-j)/(j+1);
        }
        cout<<endl;
    }

}

// Enter n : 
// 5
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
// 1 5 10 10 5 1


