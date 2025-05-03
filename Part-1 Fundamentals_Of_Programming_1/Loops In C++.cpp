// Loops in c++ -: Used to print same things multiple times, print same pattern 

// 1-: For Loops -: 

// // Q-> Print 10 times good morning by using loops (for loop).
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1; i<=10; i++){
//         cout<<"Good Morning"<<endl;
//         cout<<"Hello"<<endl;
//     }
// }



// // Q-> Print hello world 'n' times. take 'n' as i/p from user.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n "<<endl;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         cout<<"Hello World!"<<endl;
//     }
// }




// // Q-> Print no.s from 1 to 100.
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1; i<=100; i++){
//         cout<<i<<endl;
//     }
// }




// // Q-> Print all the even no.s from 1 to 100.
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1; i<=100; i++){ // this loop runs 100 times but the total 50 no. is printed, optimize this code 
//         if(i%2==0){
//             cout<<i<<endl;
//         }
//     }
// }




// // Optimize approach -: (i=i+2) == (i+=2)
// #include<iostream>
// using namespace std;
// int main(){
//    for(int i=2; i<=100; i+=2){ // this loop runs only 50 times   
//             cout<<i<<endl;  
//     }
// }




// // Q-> Print the table of 19.
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=19; i<=190; i++){ // if we use i++ then 19,20,21,22...
//         if(i%19==0){
//             cout<<i<<endl;
//         }
//     }
// }



// // Optimize approach -: (use i+=19 in place of i++) it reduces no. of iterations
// // Q-> Print the table of 19.
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=19; i<=190; i+=19){ // if we use i+=19 then 19,38,57...
//         if(i%19==0){
//             cout<<i<<endl;
//         }
//     }
// }




// // Q-> Display this AP - 1,3,5,7,9 .. upto 'n' terms.. 
// **** optimize approach -: **** 
// // ******** by using (separate) variables/(extra) variables -: *********

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a=1;
//     for(int i=1; i<=n; i++){
//         cout<<a<<" ";
//         a=a+2;
//     }
// }
// // 10
// // 1 3 5 7 9 11 13 15 17 19





// // Q-> Display this AP - 1,3,5,7,9 .. upto 'n' terms. (diff=2)
// // AP-> by using AP formula -: an=a+(n-1)d, a=first term, d=common diff. a=1,d=2, 1+(n-1)2, 2n-1, an=2n-1(formula) 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=2*n-1; i+=2){
//         cout<<i<<" ";
//     }
// }

// // 10
// // 1 3 5 7 9 11 13 15 17 19





// Q-> Display this AP - 4,7,10,13,16... upto 'n' terms... (diff=3)
// **** optimize approach -: **** 
// by using (separate) variables/(extra) variables -:

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a=4;
//     for(int i=1; i<=n; i++){
//         cout<<a<<" ";
//         a+=3; // or a=a+3
//     }
// }





// // Q-> display this GP - 1,2,4,8,16,32.... upto 'n' terms. 
// // optimize ways -: by using (separate) variables/(extra) variables -: 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a=1;
//     for(int i=1; i<=n; i++){
//         cout<<a<<" ";
//         a*=2;
//     }
// }
// // 6
// // 1 2 4 8 16 32





// Q-> Display 2,6,18,54..;

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a=2;
//     for(int i=1; i<=n; i++){
//         cout<<a<<" ";
//         a*=3; // a=a*3
//     }
// }
// // 5
// // 2 6 18 54 162 




// // Q-> Display -: 100,97,94, upto +ve terms 
// #include<iostream>
// using namespace std;
// int main(){
//     // for(int i=100; i>=1; i-=3){
//     //     cout<<i<<" ";
//     // }

//     for(int i=100; i>0; i=i-3){
//         cout<<i<<" ";
//     }
// }





// 2-: While Loops -: Used when the actual condition does not know in proper way 
// or does not fit increment/decrement, conditions, initialization in for loops  

// // Q-> Print 1 to 10 using for and while loops -: 
// #include<iostream>
// using namespace std;
// int main(){
//     // // using for loop -:
//     // for(int i=1; i<=10; i++){
//     //     cout<<i<<" ";
//     // }

//     // using while loop -:
//     int i=1;
//     while(i<=10){
//         cout<<i<<" ";
//         i++;
//     }
// }





// 3-: Do-While Loops -: one time loop is run either the given condition is true or not.
// It gives the o/p one time either the given condition is true or not.


// // Q-> Print 1 to 10.
// // *** cond. is true -: o/p -: 1 2 3 4 5 6 7 8 9 10 
// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     do{
//         cout<<i<<" ";
//         i++;
//     }while(i<=10);
// }





// Q-> Print 1 to 10.
// // *** cond. is false but 11 is printed becoz one time loop is run -: o/p -: 11
// #include<iostream>
// using namespace std;
// int main(){
//     int i=11;
//     do{
//         // print without checking the given condition 
//         cout<<i<<" ";
//         i++;
//     }while(i<=10);
// }





// Q-> Print all the alphabets(uppercase) with their ascii values.
#include<iostream>
using namespace std;
int main(){

    // 1-: by using for loop -: 
    // char ch ='A';
    // int a=(int)ch;
    // for(int i=65; i<=90; i++){
    //     cout<<ch<<" "<<a<<endl;
    //     ch++;
    //     a++;
    // }


            // OR -: 
    for(int i=65; i<=90; i++){
        cout<<(char)i<<" "<<i<<endl;
        
    }



    // 2-: by using while loop -: 
    // char ch='A';
    // int a=65;
    // while(a<=90){
    //     cout<<ch<<" "<<a<<endl;
    //     ch++;
    //     a++;
    // }

    

    // 3-: by using do-while loop -: 
    // char ch='A';
    // int a=65;
    // do{
    //     cout<<ch<<" "<<a<<endl;
    //     ch++;
    //     a++;
    // }while(a<=90);

}

