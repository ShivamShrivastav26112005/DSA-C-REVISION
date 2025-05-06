// Pattern Printing - 2 -: always choose n=4 as input -: 


// Q-> Print the given Pattern -: 
// 1-: Rhombus -: three loops (1-:space, 2-:stars, 3-:stars) inside one loop. 
//    ****
//   ****
//  ****
// ****



// a- : 
// Enter the number n : 4
//    *
//   **
//  ***
// ****

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number n : ";
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         // spaces -: 
//         for(int j=1; j<=n-i; j++){
//             cout<<" ";
//         }
//         // stars 
//         for(int k=1; k<=i; k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }





// b -: 
// Enter the number n : 4
// ***
// **
// *
// 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number n : ";
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for(int k=1; k<=n-i; k++){ // k<n+1-i
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }





// Add a and b to get the final result -: 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number n : ";
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         // spaces  
//         for(int j=1; j<=n-i; j++){
//             cout<<" ";
//         }
//         // stars 
//         for(int k=1; k<=i; k++){
//             cout<<"*";
//         }
//         // stars 
//         for(int k=1; k<=n-i; k++){ 
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// // Enter the number n : 4
// //    ****
// //   ****
// //  ****
// // ****






// 2-: Star Pyramid -: 
//    *
//   ***
//  *****
// *******


// a-:
// Enter the number n : 4
//    *
//   **
//  ***
// ****

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number n : ";
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         // spaces-: 
//         for(int j=1; j<=n-i; j++){
//             cout<<" ";
//         }
//         // stars-: 
//         for(int k=1; k<=i; k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }




// b-:
// Enter the number n : 4
//
// *
// **
// ***

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number n : ";
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for(int k=1; k<=i-1; k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }





// Add a and b to get the final result -: 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number n : ";
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         // spaces-: 
//         for(int j=1; j<=n-i; j++){
//             cout<<" ";
//         }
//         // stars-: 
//         for(int k=1; k<=i; k++){
//             cout<<"*";
//         }
//         // stars-:
//         for(int k=1; k<=i-1; k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// // Enter the number n : 4
// //    *
// //   ***
// //  *****
// // *******







// 3-: Number Pyramid Palindrome -:
//    1
//   121
//  12321
// 1234321


// a-:
// Enter the number n : 4
//    1
//   12
//  123
// 1234

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number n : ";
//     cin>>n;

//     // for no. of rows -:  
//     for(int i=1; i<=n; i++){
//         // for spaces -:
//         for(int j=1; j<=n-i; j++){
//             cout<<" ";
//         }
//         // for number -: 
//         for(int k=1; k<=i; k++){
//             cout<<k;
//         }
//         cout<<endl;
//     }
// }





// b-:
// Enter the number n : 4
//
// 1
// 21
// 321

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number n : ";
//     cin>>n;

//     // for no. of rows -:  
//     for(int i=1; i<=n; i++){
//         // for number -: 
//         int p=i-1;
//         for(int k=1; k<=i-1; k++){
//             cout<<p;
//             p--;
//         }
//         cout<<endl;
//     }
// }





// Add a and b to get the final answer-: 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number n : ";
//     cin>>n;

//     // for no. of rows -:  
//     for(int i=1; i<=n; i++){
//         // for spaces -:
//         for(int j=1; j<=n-i; j++){
//             cout<<" ";
//         }
//         // for number -: 
//         for(int k=1; k<=i; k++){
//             cout<<k;
//         }
//         // for number -:
//         int p=i-1;
//         for(int k=1; k<=i-1; k++){
//             cout<<p;
//             p--;
//         }
//         cout<<endl;
//     }
// }


// // Enter the number n : 4
// //    1
// //   121
// //  12321
// // 1234321







// 4-: Star Diamond -:
//     *
//    ***
//   *****
// *********
//   *****
//    ***
//     *

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number n : ";
//     cin>>n;

//     // for no. of rows -: 
//     for(int i=1; i<=n; i++){
//         // for spaces -: 
//         for(int j=1; j<=n-i; j++){
//             cout<<" ";
//         }
//         // for stars -:
//         for(int k=1; k<=i; k++){ // k depends upon rows(triangle) so, k<=i
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }




// a-:
// Enter the number n : 4
//    *
//   **
//  ***
// ****


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number n : ";
//     cin>>n;

//     // for no. of rows -: 
//     for(int i=1; i<=n; i++){
//         // for stars -:
//         for(int k=1; k<=i-1; k++){ 
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }





// b-:
// Enter the number n : 4
//
// *
// **
// ***


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number n : ";
//     cin>>n;

//     // for no. of rows -: 
//     for(int i=1; i<=n; i++){
//         // for spaces -: 
//         for(int j=1; j<=n-i; j++){
//             cout<<" ";
//         }
//         // for stars -:
//         for(int k=1; k<=i; k++){ 
//             cout<<"*";
//         }
//         // for stars -: 
//         for(int k=1; k<=i-1; k++){ 
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }





// c-:
// Enter the number n : 4
//    *
//   ***
//  *****
// *******



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number n : ";
//     cin>>n;

//     // for no. of rows -: 
//     for(int i=1; i<=n; i++){
//         // for spaces -: 
//         for(int j=1; j<=i-1; j++){
//             cout<<" ";
//         }
//         // for stars -:
//         for(int k=1; k<=n+1-i; k++){ 
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }






// d-:
// Enter the number n : 4
// ****
//  ***
//   **
//    *




// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number n : ";
//     cin>>n;

//     // for no. of rows -: 
//     for(int i=1; i<=n; i++){
//         // for stars -:
//         for(int k=1; k<=n-i; k++){ 
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// e-:
// Enter the number n : 4
// ***
// **
// *
//





// 4-: Star Diamond -: for n=4 then total 7 rows is printed i.e. 2n-1 rows 
//     *
//    ***
//   *****
// *********
//   *****   // nsp and nst is changed here so we apply condi. here 
//    ***
//     *

// Use the concept of no. of stars and no. of spaces -: 
// Algo-: Take a extra variable nst and nsp.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number n : ";
//     cin>>n;

//     int nsp=n-1;
//     int nst=1;
//     //  for rows -: 
//     for(int i=1; i<=2*n-1; i++){

//         // for space -:
//         for(int j=1; j<=nsp; j++){
//             cout<<" ";
//         }
//         if(i<=n-1) nsp--;
//             else nsp++;

//         // for star -: 
//         for(int k=1; k<=nst; k++){
//             cout<<"*";
//         }
//         if(i<=n-1) nst+=2; // no. of stars is increased by 2 
//             else nst-=2;

//         cout<<endl;
//     }
// }

// // Enter the number n : 4
// //    *
// //   ***
// //  *****
// // *******
// //  *****
// //   ***
// //    *







// 5-:  Star Bridge -: use nst and nsp variable method -: 
// *******
// *** ***
// **   **
// *     *


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number n : ";
//     cin>>n;

//     // for rows -:
//     for(int i=1; i<=n; i++){
//         // for stars -:
//         for(int j=1; j<=n+1-i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// // a-: 
// // Enter the number n : 3
// // ***
// // **
// // *






// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number n : ";
//     cin>>n;

//     // for rows -:
//     for(int i=1; i<=n; i++){
//         // for spaces -:
//         for(int j=1; j<=i-1; j++){
//             cout<<" ";
//         }
//         // for stars -: 
//         for(int k=1; k<=n+1-i; k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// // b-: 
// // Enter the number n : 3
// // ***
// //  **
// //   *








// 5-:  Star Bridge -: Algo used nst and nsp variables -: 
// *******
// *** ***
// **   **
// *     *


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number n : ";
//     cin>>n;

//     // first print 7 stars 
//     for(int i=1; i<=2*n-1; i++){
//         cout<<"*";
//     }
//     cout<<endl;

//     // used extra variables- : 
//     int m=n-1;
//     int nsp=1;

//     for(int i=1; i<=m; i++){
//         // for stars -: 
//         for(int j=1; j<=m+1-i; j++){
//             cout<<"*";
//         }

//         // for spaces -:
//         for(int k=1; k<=nsp; k++){
//             cout<<" ";
//         }
//         nsp+=2;

//         // for stars -: 
//         for(int j=1; j<=m+1-i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// // Enter the number n : 4
// // *******
// // *** ***
// // **   **
// // *     *







// 6-: Number Bridge -: for n=4 
// 1234567
// 123 123
// 12   12
// 1     1


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number n : ";
//     cin>>n;

//     // first print 7 stars 
//     for(int i=1; i<=2*n-1; i++){
//         cout<<i;
//     }
//     cout<<endl;

//     // used extra variables- : 
//     int m=n-1;
//     int nsp=1;

//     for(int i=1; i<=m; i++){
//         // for no.s -: 
//         for(int j=1; j<=m+1-i; j++){
//             cout<<j;
//         }

//         // for spaces -:
//         for(int k=1; k<=nsp; k++){
//             cout<<" ";
//         }
//         nsp+=2;

//         // for no.s -: 
//         for(int j=1; j<=m+1-i; j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//  }

// // Enter the number n : 4
// // 1234567
// // 123 123
// // 12   12
// // 1     1







// 7-: Number Bridge -: for n=4 
// used extra variable for 567 and more 

// 1234567
// 123 567
// 12   67
// 1     7

// divide into two parts -: 
// 1-: 
// 1234567

// 2-: 
// 123 567
// 12   67
// 1     7


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number n : ";
    cin>>n;

    // first print 7 stars 
    for(int i=1; i<=2*n-1; i++){
        cout<<i;
    }
    cout<<endl;

    // used extra variables- : 
    int m=n-1;
    int nsp=1;

    for(int i=1; i<=m; i++){ // run 1 to 7 
        // for no.s -: 
        // extra variable -:
        int a=1; // global variable 
        for(int j=1; j<=m+1-i; j++){
            cout<<a;
            a++;
        }

        // for spaces -:
        for(int k=1; k<=nsp; k++){
            cout<<" ";
            a++;

        }
        nsp+=2;

        // for no.s -: 
        for(int j=1; j<=m+1-i; j++){                     
            cout<<a;
            a++;
        }
        cout<<endl;
    }
 }

// Enter the number n : 4
// 1234567
// 123 567
// 12   67
// 1     7

// DONE-06-05-2025
