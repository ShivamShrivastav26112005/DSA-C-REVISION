// Selection Sort Algorithm -: 
// Q-> given unsorted array -> to sort this array.


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
                // OR -: 
    // this is for-each loop -: 
    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;
  
    // selection sorting -: 
    for(int i=0; i<n-1; i++){ // traverse at the 2nd last ele. 
        int min=INT_MAX;
        int mindx=-1;
        for(int j=i; j<n; j++){ // j starts from i 
            if(arr[j]<min){ // finding min ele. 
                min=arr[j];
                mindx=j;
            }
        }
        swap(arr[i],arr[mindx]); // swap min ele. with first ele. of the box  
    }
  
    cout<<"Display after sorting : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

// Display before sorting : 3 2 4 1 5 
// Display after sorting : 1 2 3 4 5 

// TC = all cases -> O(n^2) and this is "unstable" sorting algo. 



