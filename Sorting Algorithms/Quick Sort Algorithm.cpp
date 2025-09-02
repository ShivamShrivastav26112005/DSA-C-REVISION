
// Quick Sort Algorithms -: 

#include<iostream>
#include<climits>
using namespace std;

int partition(int arr[],int si, int ei){
    int pivotele=arr[si];

    // finding the correct index of the array's first ele. i.e. correctidx of the pivotele.
    int count=0;
    for(int i=si+1; i<=ei; i++){
        if(arr[i]<=pivotele){
            count++;
        }
    }
  
    int pivotidx=si+count;
    swap(arr[si],arr[pivotidx]);

    // all the ele. in left of the pivotele is less and right is high.
    int i=si; 
    int j=ei;
    while(i<pivotidx && j>pivotidx){
        if(arr[i]<pivotele) i++;
        if(arr[j]>pivotele) j--;
        else if(arr[i]>pivotele && arr[j]<pivotele){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    } 
}

void quicksort(int arr[],int si, int ei){
    if(si>=ei) return;

    int pi=partition(arr,si,ei);

    // apply recursion -:

    quicksort(arr,si,pi-1);
    quicksort(arr,pi+1,ei);
}

int main(){
    int arr[]={3,2,4,1,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<" Before sorting the arrays : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    quicksort(arr,0,n-1);

    cout<<"After sorting the arrays : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}


//  Before sorting the arrays : 3 2 4 1 5 
// After sorting the arrays : 1 2 3 4 5 



