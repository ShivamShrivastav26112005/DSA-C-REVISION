// Algorithms -: 

// Data Structure -> Arrays, Vectors, Strings, ... 
// Algorithms -> Sorting, Searching, Recursion, ...


// 1-> Bubble Sort Algorithm -: 

// // in-built sorting -: 
// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main(){
//     // input the size of the vector 
//     int n;
//     cin>>n;

//     // we make a vector 
//     vector<int>v(n);

//     // input the ele.s 
//     for(int i=0; i<n; i++){
//         cin>>v[i];
//     }

//     // in-built sorting by using sort() fun.
//     // sorting in ascending order -: 
//     sort(v.begin(), v.end()); // TC=O(nlogn)
    
//     // output the ele.s 
//     for(int i=0; i<v.size(); i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
    
//     // sorting in descending order -: used reverse() fun. 
//     reverse(v.begin(), v.end()); // TC=O(nlogn)

//     // output the ele.s 
//     for(int i=0; i<n; i++){
//         cout<<v[i]<<" ";
//     }

// }

// // 5
// // 2 5 3 1 4 
// // 1 2 3 4 5 
// // 5 4 3 2 1







// // 1-> Bubble Sort Algorithm -: 

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={2,1,3,5,4};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<"Before Sorting : ";
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     // bubble sorting -: 

//     // // 1-: 
//     // for(int i=0; i<n-1; i++){ // n-1 passes 
//     //     for(int j=0; j<n-1; j++){
//     //         if(arr[j]>arr[j+1]){
//     //             // swap(arr[j],arr[j+1]);
//     //                     // OR -:
//     //             int temp=arr[j];
//     //             arr[j]=arr[j+1];
//     //             arr[j+1]=temp;
//     //         }
//     //     }
//     // }

//     // cout<<"After Sorting : ";
//     // for(int i=0; i<n; i++){
//     //     cout<<arr[i]<<" ";
//     // }

//     // Before Sorting : 2 1 3 5 4 
//     // After Sorting : 1 2 3 4 5 
//     // TC=O(n^2)





//     // // 2-: 
//     // for(int i=0; i<n-1; i++){ 
//     //     for(int j=0; j<n-1-i; j++){
//     //         if(arr[j]>arr[j+1]){
//     //             swap(arr[j],arr[j+1]);
//     //         }
//     //     }
//     // }

//     // cout<<"After Sorting : ";
//     // for(int i=0; i<n; i++){
//     //     cout<<arr[i]<<" ";
//     // }


//     // Before Sorting : 2 1 3 5 4 
//     // After Sorting : 1 2 3 4 5 
//     // TC=O(n^2)







//     // // Q-> Given an array find if it sorted or not. 

//     // // 3-: optimize code -: 
//     // bool flag=true; // sorted 
//     // for(int i=0; i<n; i++){
//     //     if(arr[i]>arr[i+1]){
//     //         flag=false;
//     //         break;
//     //     }
//     // }
//     // if(flag==true){
//     //     cout<<"Sorted";
//     // }else{
//     //     cout<<"Not sorted";
//     // }

//     // Before Sorting : 2 1 3 5 4 
//     // Not sorted








//     // 4-: Bubble Sort Optimised -: Learn this -: 

//     for(int i=0; i<n-1; i++){ // n-1 passes 
//         // traverse -: 
//         bool flag=true;
//         for(int j=0; j<n-1-i; j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]); // swap 
//                 flag=false;
//             }
//         }
//         if(flag==true){ // swap didn't happen 
//             break;
//         }
//     } 

//     cout<<"After Sorting : ";
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }

//     // Before Sorting : 2 1 3 5 4 
//     // After Sorting : 1 2 3 4 5 

//     // TC-: 
//     // best case -> O(n)
//     // worst,avg case -> O(n^2)

// }





// Bubble sorting optimised -: 

#include<iostream>
using namespace std;
int main(){
    int arr[]={3,2,4,1,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before sorting : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // bubble sort algo -: 
    for(int i=0; i<n-1; i++){
        bool flag=true;
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=false;
            }
        }
        if(flag==true){
            break;
        }
    }

    cout<<"After sorting : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}

// Before sorting : 3 2 4 1 5 
// After sorting : 1 2 3 4 5


#include<iostream>
using namespace std;
int main(){
    cout<<"Mukesk";
}