// Loops -: 
// 1-: Problems on loops -:

// 2-: break statements -: break the line/iteration  

// // Q-> check the given no. is composite.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number : "<<endl;
//     cin>>n;
//     for(int i=2; i<n; i++){
//         if(n%i==0){
//             cout<<"Composite no."<<endl;
//             break;
//         }
//     }
// }
// // Enter a number : 
// // 60
// // Composite no.



// // Q-> check the given no. is composite or not.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number : "<<endl;
//     cin>>n;
//     for(int i=2; i<n; i++){
//         if(n%i==0){
//             cout<<"Composite no."<<endl;
//             break;
//         }else{
//             cout<<"Not a composite no."<<endl;
//             cout<<"This is a Prime no."<<endl;
//             break;
//         }
//     }
// }
// // Enter a number : 
// // 17
// // Not a composite no.
// // This is a Prime no.




// // Q-> WAP to check if a no. is prime or not. 
// // Prime no. -> 2,3,5,7,11..

// // => this code is not handle the value of n=1 and n=2 cases -: 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number : "<<endl;
//     cin>>n;

//     for(int i=2; i<n; i++){
//         if(n%i==0){
//             cout<<"Not a prime no. "<<endl;
//             break;
//         }else{
//             cout<<"Prime no. "<<endl;
//             break;
//         }
//     }

// }


// // => Proper code to find the prime no. 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the no."<<endl;
//     cin>>n;

//     bool flag=true; // prime no. // n=2, then i runs 2 to 1 which is not possible, it means loop is not execute 
//     for(int i=2; i<n; i++){ // n=3, then loop runs 2 to 2, condi. checks-> 3%2==0 -> no so,  it is prime no.
//         if(n%i==0){ // composite no.
//             flag=false;
//             break;
//         }
//     }

//     if(n==1){
//         cout<<"Neither prime nor composite. "<<endl;
//     }else if(flag==true){
//         cout<<"Prime no. "<<endl;
//     }else{
//         cout<<"Not a prime no . This is composite no. "<<endl;
//     }
// }



// // Q-> check the given no. is prime or not.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the no. "<<endl;
//     cin>>n;

//     bool flag=true;
//     for(int i=2; i<n; i++){
//         if(n%i==0){
//             flag=false;
//             break;
//         }
//     }

//     if(n==1){
//         cout<<"Neither prime nor composite No. ";
//     }else if(flag==true){
//         cout<<"Prime No.";
//     }else{
//         cout<<"Composite No.";
//     }

// }



// 3-: continue statements -: skip the iteration 
// // Q-> WAP to print odd no.s from 1 to 100 using continue state.
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1; i<=100; i++){
//         if(i%2==0){
//             continue;
//         }
//         cout<<i<<" ";
//     }
// }


// 4-: Ques. using operators -: (+,-,*,/,%) etc.
// WAP to count digits (0-9,tens,ten digit exists only) of a given no.


// // (Wrong code,) not handle n=0 value 
// // ***** if we take n=0 the it returns 0 digit not 1 so, this code is (wrong) ******

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the no. "<<endl;
//     cin>>n;

//     int count=0;
//     while(n>0){
//         n/=10;
//         count++;
//     }
//     cout<<count;

// }




// // ******  optimize upper code so that it handles n=0 value also. ****** 
// // Right code, handles all the no.s 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the no. "<<endl;
//     cin>>n;

//     int a=n;
//     int count=0;
//     while(n>0){
//         n/=10;
//         count++;
//     }
//     if(a==0){
//         cout<<1;
//     }else{
//         cout<<count<<" digits ";
//     }

// }

// // Enter the no. 
// // 256987
// // 6 digits 




// // WAP to print sum of digits of a given no.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :"<<endl;
//     cin>>n;

//     int sum=0;
//     while(n>0){
//         int lastdigit=n%10;
//         sum+=lastdigit;
//         n/=10;
//     }
//     cout<<sum;

// }
// // Enter the number :
// // 9874
// // 28




// // WAP to print reverse of a given number.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :"<<endl;
//     cin>>n;

//     int rev=0;
//     while(n>0){
//         int lastdigit=n%10;
//         rev*=10;
//         rev+=lastdigit;
//         n/=10;
//     }
//     cout<<rev;

// }

// // Enter the number :
// // 12548639
// // 93684521




// // Print the sum of this series: 1-2+3-4+5-6... upto 'n'.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;

//     int sum=0;
//     for(int i=1; i<=n; i++){
//         if(i%2==0){
//             sum-=i;
//         }else{
//             sum+=i;
//         }
//     }
//     cout<<sum;

// }

// // Enter n : 6
// // -3




// // // Q-> Print the factorial of a given number 'n'.
// // 0!=1, 1!=1. 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;

//     int fact=1;
//     for(int i=1; i<=n; i++){
//         fact*=i;
//     }
//     cout<<fact;

// }
// // Enter n : 6
// // 720




// // Print the nth fibonacci number. loop runs from i=1 to i<=n-2. 
// // 1,1,2,3,5,8,13... 
// // starts from a=1 and b=1, this is a base case. 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;

//     int a=1;
//     int b=1;
//     int sum=0;
//     for(int i=1; i<=n-2; i++){ // IMP
//         sum=a+b;
//         a=b;
//         b=sum;
//     }
//     cout<<b;

// }




// Take i/p 2 no.s. Find the value of one no. raised to the power of another.
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a : ";
    cin>>a;

    int b;
    cout<<"Enter b : ";
    cin>>b;

    int ans=1;
    for(int i=1; i<=b; i++){
        ans*=a;
    }
    cout<<ans;

}
// Enter a : 3
// Enter b : 4
// 81

// Done @Shivam Shrivastav
