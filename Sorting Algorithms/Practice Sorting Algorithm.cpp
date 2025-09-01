// Bubble Sort -: 

#include<iostream>
using namespace std;
int main(){
    int arr[]={3,2,-4,56,0,1,4};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"Before sorting the array ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // bubble sort algo. is used here -:

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    cout<<"After sorting the array's ele. ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

// Before sorting the array 3 2 -4 56 0 1 4 
// After sorting the array's ele. -4 0 1 2 3 4 56 








// Insertion Sort -: 

#include<iostream>
using namespace std;
int main(){
    int arr[]={3,2,4,1,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before sorting display the ele's : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // insertion sort algo -:

    for(int i=0; i<n; i++){
        int j=i;
        while(j>=1){
            if(arr[j]>arr[j-1]) break;
            else swap(arr[j],arr[j-1]);
            j--;
        }
    }

    cout<<"After sorting ele.s : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}

// Before sorting display the ele's : 3 2 4 1 5 
// After sorting ele.s : 1 2 3 4 5




// Selection Sort -:

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={3,2,4,1,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before sorting the array : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // selection sort algo -:

    for(int i=0; i<n; i++){
        int min=INT_MAX;
        int mindx=-1;
        for(int j=i; j<n; j++){
            if(arr[j]<min){
                min=arr[j];
                mindx=j;
            }
        }
        swap(arr[i],arr[mindx]);
    }

    cout<<"After sorting the array's ele. ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}

// Before sorting the array : 3 2 4 1 5 
// After sorting the array's ele. 1 2 3 4 5







