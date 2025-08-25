// prefix sum -> is based on formulas only -: 

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5};
//     int n=sizeof(arr)/sizeof((arr[0]));
//     vector<int>v(arr,arr+n);
//     for(int i=0; i<n; i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;

//     // prefix sum code -: 
//     vector<int>ans(n);
//     ans[0]=v[0];
//     for(int i=1; i<n; i++){
//         ans[i]=v[i]+ans[i-1];
//     }


//     for(int i=0; i<n; i++){
//         cout<<ans[i]<<" ";
//     }
// }

// // 1 2 3 4 5 
// // 1 3 6 10 15



// prefix product -: 

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5};
//     int n=sizeof(arr)/sizeof((arr[0]));
//     vector<int>v(arr,arr+n);
//     for(int i=0; i<n; i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;

//     // prefix sum code -: 
//     vector<int>ans(n);
//     ans[0]=v[0];
//     for(int i=1; i<n; i++){
//         ans[i]=v[i]*ans[i-1];
//     }


//     for(int i=0; i<n; i++){
//         cout<<ans[i]<<" ";
//     }
// }

// // 1 2 3 4 5 
// // 1 2 6 24 120 




// // suffix sum -: 

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5};
//     int n=sizeof(arr)/sizeof((arr[0]));
//     vector<int>v(arr,arr+n);
//     for(int i=0; i<n; i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;

//     // prefix sum code -: 
//     vector<int>ans(n);
//     ans[n-1]=v[n-1];
//     for(int i=n-2; i>=0; i--){
//         ans[i]=v[i]+ans[i+1];
//     }


//     for(int i=0; i<n; i++){
//         cout<<ans[i]<<" ";
//     }
// }

// // 1 2 3 4 5 -> v
// // 15 14 12 9 5 -> ans





// suffix product -: 

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof((arr[0]));
    vector<int>v(arr,arr+n);
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // prefix sum code -: 
    vector<int>ans(n);
    ans[n-1]=v[n-1];
    for(int i=n-2; i>=0; i--){
        ans[i]=v[i]*ans[i+1];
    }


    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
}

// 1 2 3 4 5 
// 120 120 60 20 5 