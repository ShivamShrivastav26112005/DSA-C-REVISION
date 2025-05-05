// Pattern Printing 1-: IMP-: no. of rows and no. of colums, used nested loops, print spaces (" "). 
// In case of triangle printing, loop runs from i=1 to n and j=1 to i. 
// In case of square printing, loop runs from i=1 to n and j=1 to n. 
// for printing patterns use-: nested loops and i,j variables 


// Q-> Print the given pattern -> 1-: solid rectangle 
// *****
// *****
// *****

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the rows : ";
//     cin>>n;

//     int m;
//     cout<<"Enter the colums : ";
//     cin>>m;

//     // for(int i=0; i<n; i++){
//     //     for(int j=0; j<m; j++){
//     //         cout<<"*";
//     //     }
//     //     cout<<endl;
//     // }

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=m; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

// }

// // Enter the rows : 3
// // Enter the colums : 5
// // *****
// // *****
// // *****




// 2-: solid square -: same rows and same columns 
// ****
// ****
// ****
// ****


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the rows : ";
//     cin>>n;

//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

// }

// // Enter the rows : 3
// // ***
// // ***
// // ***




// 3-: Number square-: 
// 1234
// 1234
// 1234
// 1234


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the rows : ";
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }

// }

// // Enter the rows : 4
// // 1234
// // 1234
// // 1234
// // 1234

// // Enter the rows : 3
// // 123
// // 123
// // 123





// 4-: Star Triangle -: 
// *
// **
// ***
// ****

// 1 row-> 1 *, 2 rows-> 2 **, 3 rows-> 3 *** ... jitne rows utne stars 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the rows : ";
//     cin>>n;

//     for(int i=1; i<=n; i++){ // rows 
//         for(int j=1; j<=i; j++){ // cols 
//             cout<<"*";
//         }
//         cout<<endl;
//     }
    
// }

// // Enter the rows : 4
// // *
// // **
// // ***
// // ****




// 5-: Star Triangle Reverse -: 
// ****
// ***
// **
// *

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the rows : ";
//     cin>>n;

//     for(int i=1; i<=n; i++){ // rows 
//         for(int j=1; j<=n+1-i; j++){ // cols 
//             cout<<"*";
//         }
//         cout<<endl;
//     }
    
// }

// // Enter the rows : 5
// // *****
// // ****
// // ***
// // **
// // *




// 6-: Number Triangle -:
// 1
// 12
// 123
// 1234


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the rows : ";
//     cin>>n;

//     for(int i=1; i<=n; i++){ // rows 
//         for(int j=1; j<=i; j++){ // cols 
//             cout<<j;
//         }
//         cout<<endl;
//     }
    
// }

// // Enter the rows : 4
// // 1
// // 12
// // 123
// // 1234





// 7-: Odd Number Triangle -: 
// i am stucking at 13, 1 is printing but 3 is not then, we take a help of rows and multiply 
// at any how you might be found 3, by multipling some no, taking rows and apply some arithmetic ops. 
// 3 = 2*i-1, where i=2, 2*2-1-> 4-1-> 3 

// 1
// 13 
// 135
// 1357

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the rows : ";
//     cin>>n;

//     for(int i=1; i<=n; i++){ // rows 
//         for(int j=1; j<=2*i-1; j+=2){ // cols 
//             cout<<j;
//         }
//         cout<<endl;
//     }
    
// }

// // Enter the rows : 4
// // 1
// // 13
// // 135
// // 1357





// // ************ Better Approach **********
// // ***** By Using Separate Variables / Extra Variables ***** 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the rows : ";
//     cin>>n;

//     for(int i=1; i<=n; i++){ // rows 
//         int a=1;
//         for(int j=1; j<=i; j++){ // cols runs rows times so we apply loops till i (row).
//             cout<<a;
//             a+=2;
//         }
//         cout<<endl;
//     }
    
// }

// // Enter the rows : 5
// // 1
// // 13
// // 135
// // 1357
// // 13579





// 8-: Alphabet Square -:  Used ascii values 
// ABCD
// ABCD
// ABCD
// ABCD

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter rows : ";
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             cout<<(char)(j+64);
//         }
//         cout<<endl;
//     }
// }

// // Enter rows : 4
// // ABCD
// // ABCD
// // ABCD
// // ABCD





// 9-> Small alphabets -: 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter rows : ";
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             cout<<(char)(j+96);
//         }
//         cout<<endl;
//     }
// }

// // Enter rows : 5
// // abcde
// // abcde
// // abcde
// // abcde
// // abcde






// 10-: Alphabets triangle-: 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter rows : ";
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<(char)(j+96);
//         }
//         cout<<endl;
//     }
// }

// // Enter rows : 5
// // a
// // ab
// // abc
// // abcd
// // abcde


// 11-: Star Plus -:
//    *
//    *
//  *****
//    *
//    *  


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter rows : ";
//     cin>>n;
    
//     int mid=n/2+1;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             if(i==mid || j==mid){
//                 cout<<"*";
//             }else{
//                 cout<<" "; // " " -> this is space -> it is also print 
//             }
//         }
//         cout<<endl;
//     }
// }

// // Enter rows : 5
// //   *  
// //   *  
// // *****
// //   *  
// //   *





// 12-: Star Cross -: 
// *   *
//  * *
//   * 
//  * *
// *   *


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter rows : ";
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             if(i==j || i+j==n+1){
//                 cout<<"*";
//             }else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }

// }

// // Enter rows : 5
// // *   *
// //  * *
// //   *
// //  * * 
// // *   *





// 13-: Floyd's Triangle -: no. of rows and no. of cols is same 
// ***** solved by using extra variables -: ***** 
// 1
// 23
// 456
// 78910

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the rows : ";
//     cin>>n;

//     // by using extra variables -: 
//     int k=1;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<k;
//             k++;
//         }
//         cout<<endl;
//     }
// }

// // Enter the rows : 4
// // 1
// // 23
// // 456
// // 78910




// 14-: Binary Triangle -: 
// 1
// 01
// 101
// 0101


// // rows odd then starts from 1 and rows even then starts form 0. 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the rows : ";
//     cin>>n;

//     // by using extra variables -: 
//     int a=5; 
//     for(int i=1; i<=n; i++){ 
//         // no. starts from 0 and 1 
//         if(i%2!=0){ // odd 
//             a=1;
//         }else{ // even 
//             a=0;
//         }

//         // by using this loop no. is printed -: 
//         for(int j=1; j<=i; j++){
//             cout<<a;

//             // flipping -: change the next no. 
//             if(a==1) a=0;
//             else a=1;

//         }
//         cout<<endl;
//     }
// }

// // Enter the rows : 4
// // 1
// // 01
// // 101
// // 0101





// 15-: Binary Triangle -: Used Extra variable.
// 0
// 10
// 010
// 1010

// // odd start -> 0, even start -> 1, then flip the no. 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;

//     int a=5; // extra variable
//     for(int i=1; i<=n; i++){ // rows 
//         // starting number 
//         if(i%2==0){ // even starts-> 1
//             a=1;
//         }else{ // odd starts -> 0 
//             a=0;
//         }
//         for(int j=1; j<=i; j++){ // cols 
//             cout<<a;
//             if(a==1){
//                 a=0;
//             }else{
//                 a=1;
//             }
//         }
//         cout<<endl;
//     }
// }

// // // Enter the number : 4
// // // 0
// // // 10
// // // 010
// // // 1010





// 16-: Binary Triangle -: 
// 1
// 01
// 101
// 0101
// 10101
// i & j both odd, i & j both even and i==j then print 1 else 0 


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number n : ";
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             if(i==j || (i%2!=0 && j%2!=0) || (i%2==0 && j%2==0)){
//                 cout<<1;
//             }else{
//                 cout<<0;
//             }
//         }
//         cout<<endl;
//     }
// }

// // Enter the number n : 5
// // 1
// // 01
// // 101
// // 0101
// // 10101






// 17-: Star Triangle Flipped -: IMP-:
//     *
//    **
//   ***
//  ****
// Algo-: Two loops inside single loop :- one loop for space and one loop for stars. 


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number n : ";
//     cin>>n;

//     for(int i=1; i<=n; i++){ // rows 
//         for(int j=1; j<=n-i; j++){ // space or #
//             cout<<"#";
//         }

//         cout<<endl;
//     }
// }

// // Enter the number n : 4
// // ###
// // ##
// // #
// //


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number n : ";
//     cin>>n;

//     for(int i=1; i<=n; i++){ // rows 
//         for(int j=1; j<=n-i; j++){ // space 
//             cout<<" ";
//         }
//         for(int k=1; k<=i; k++){ // stars -> runs rows times 
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// // Enter the number n : 4
// //    *
// //   **
// //  ***
// // ****





// 18-: Number Triangle Flipped -: Two for loop is used inside one for loop, one for space and another for number.

//     1
//    12
//   123
//  1234

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number n : ";
    cin>>n;

    for(int i=1; i<=n; i++){ // for rows 
        for(int j=1; j<=n-i; j++){ // for space 
            cout<<" ";
        }
        for(int k=1; k<=i; k++){ // for no. and this is a triangle shape so, it is depends upon rows (i)
            cout<<k;
        }
        cout<<endl;
    }

}


// Enter the number n : 5
//     1
//    12
//   123
//  1234
// 12345

// Done. 
