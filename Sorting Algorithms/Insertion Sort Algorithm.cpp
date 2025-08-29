

// // Insertion Sort Algorithm -: 


#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[]={3,2,4,1,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Display before sorting : ";

    // this is for loop -: 
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // insertion sorting -: 
    for(int i=1; i<n; i++){
        int j=i; // maintain idx i in j 
        while(j>=1){ // j are try to go at 1st index 
            if(arr[j]>=arr[j-1]) break;
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
            j--;
        }
    }
                // OR -: 
    // i=0; i<n -> n times run
    // i=1; i<n -> n-1 times run -1 for 0 (i=0)

    for(int i=1; i<n; i++){ // n-1 times run 
        int j=i;
        while(j>=1){
            if(arr[j]>=arr[j-1]) break;
            else swap(arr[j],arr[j-1]);
            j--;
        }
    }

    // this is for-each loop -: 
    cout<<"Display after sorting : ";
    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}

// Display before sorting : 3 2 4 1 5 
// Display after sorting : 1 2 3 4 5


// TC= worst,avg=O(n^2), best case->O(n) without using boolean check mark (flag) or (when array is given in "sorted order")
// insertion sort is a "stable" sorting algo.  


