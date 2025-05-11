// Functions -: 

// // greeting function -: 

// #include<iostream>
// using namespace std;
// void greet(){
//     cout<<"Hello "<<endl;
// }
// int main(){
//     greet(); // fun. calling 
//     greet();
//     greet();
// }



// Print the given pattern by using Normal ways and take the i/p from the user.
// *
// **
// ***
// ****
// *
// **
// ***
// *
// **
// ***
// ****
// *****



// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cin>>a>>b>>c;
//     for(int i=1; i<=a; i++){ // rows 
//         for(int j=1; j<=i; j++){ // cols 
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     for(int i=1; i<=b; i++){
//         for(int j=1; j<=i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     for(int i=1; i<=c; i++){
//         for(int j=1; j<=i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }



// In the upper code i am writing same code again and again or many times but this is not right
// method to write the same code, make a separate function and call those fun. if necessary 
// // 4
// // 3
// // 5
// // *
// // **
// // ***
// // ****
// // *
// // **
// // ***
// // *
// // **
// // ***
// // ****
// // *****







// Print the given pattern by using Function or by making function.
// *
// **
// ***
// ****
// *
// **
// ***
// *
// **
// ***
// ****
// *****

// #include<iostream>
// using namespace std;
// void triangle(int x){
//     for(int i=1; i<=x; i++){
//         for(int j=1; j<=i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// int main(){

//     triangle(4);
//     triangle(3);
//     triangle(5);

// }


// // *
// // **
// // ***
// // ****
// // *
// // **
// // ***
// // *
// // **
// // ***
// // ****
// // *****





// // sum of two numbers by using function -: 
// #include<iostream>
// using namespace std;
// int sum(int x, int y){
//     return x+y;
// }
// int main(){
//     cout<<sum(2,3);
// }

// // 5




// // taking i/p by user. 
// #include<iostream>
// using namespace std;
// int sum(int x, int y){
//     return x+y;
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     cout<<sum(a,b);
// }

// // 10
// // 36
// // 46





// // find the minimum of two numbers by using function.
// #include<iostream>
// using namespace std;
// int mini(int a, int b){
//     if(a<b){
//         return a;
//     }else{
//         return b;
//     }
// }
// int main(){
//     cout<<mini(31,7);
//     cout<<endl;
//     // built-in fun.
//     cout<<min(4,8);
// }

// 7
// 4




// // Taking no. by user. 
// #include<iostream>
// using namespace std;
// int mini(int a, int b){
//     if(a<b){
//         return a;
//     }else{
//         return b;
//     }
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     cout<<mini(a,b);
// }

// // 25
// // 59
// // 25






// // find the maximum of the two no.s.
// #include<iostream>
// using namespace std;
// int maxi(int a,int b){   
//     int ans;
//     if(a>b){
//         ans=a;
//     }else{
//         ans=b;
//     }
//     cout<<ans;
// }
// int main(){
//     maxi(5,6);
// }

// // 6






// // taking user i/p.
// #include<iostream>
// using namespace std;
// int maxi(int a, int b){ // this a and b is diff. 
//     if(a>b){
//         return a;
//     }else{
//         return b;
//     }
// }
// int main(){
//     int a,b; // this a and b is also diff. 
//     cin>>a>>b;
//     cout<<maxi(a,b);
//     cout<<endl;
//     // built-in fun. 
//     cout<<max(45,65);
// }

// // 45
// // 54
// // 54
// // 65






// Using Built-in fun.
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    cout<<min(4,5)<<endl;
    cout<<max(3,9)<<endl;;
    cout<<sqrt(16);
}

// 4
// 9
// 4

