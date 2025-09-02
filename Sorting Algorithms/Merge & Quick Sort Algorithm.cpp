
// Merge Sort algo -: 

#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& v1, vector<int>& v2, vector<int>& ans){
    int i=0;
    int j=0;
    int k=0;
    while(i<v1.size() && j<v2.size()){
        if(v1[i]<v2[j]){
            ans[k]=v1[i];
            i++;
            k++;
        }else{
            ans[k]=v2[j];
            j++;
            k++;
        }
    }
    // two more cases exists while merging two arrays 
    if(i==v1.size()){
        while(j<v2.size()){
            ans[k]=v2[j];
            j++;
            k++;
        }
    }
    if(j==v2.size()){
        while(i<v1.size()){
            ans[k]=v1[i];
            i++;
            k++;
        }
    }
}

void mergesort(vector<int>& v){
    int n=v.size();
    // base case -:
    if(n==1) return;
    // make two new brand vector -: 
    int n1=n/2;
    int n2=n-n/2;

    vector<int>v1(n1);
    vector<int>v2(n2);

    // copying the ele.s from the original vector to new brand vector.
    for(int i=0; i<n1; i++){
        v1[i]=v[i];
    }
    for(int i=0; i<n2; i++){
        v2[i]=v[i+n1];
    }
    // recursion -: fun. calls itself -: 
    mergesort(v1);
    mergesort(v2);
    // after applying mergesort on v1, v2 vector merge these two vectors 
    merge(v1,v2,v); 
}

int main(){
    int arr[]={3,2,4,1,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before sorting the array : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // store array into the vector then pass the vector to a function. 
    vector<int> v(arr,arr+n);
    cout<<"Vector printing : ";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // function calling -: 
    mergesort(v);

    cout<<"After sorting the array : ";
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
}

// Before sorting the array : 3 2 4 1 5 
// Vector printing : 3 2 4 1 5 
// After sorting the array : 1 2 3 4 5 








//  Quick Sort Algorithm -:

// finding pivot ele. first and then swap with 1st ele. of the array and then check
// all the ele.s present in the left of the pivotele is less and all the ele.s present 
// in the right is greater than pivotele. 


#include<iostream>
using namespace std;

int partition(int arr[], int si,int ei){
    int pivotele=arr[si];

    // finding pivotidx in the array 
    int count=0;
    for(int i=si+1; i<ei; i++){
        if(arr[i]<=pivotele){
            count++;
        }
    }
    int pivotidx=si+count;
    swap(arr[si],arr[pivotidx]);

    // check all the ele.s in left side is smaller and right side is greater 

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
    return pivotidx;
}

void quicksort(int arr[], int si, int ei){
    // base case -: 
    if(si>=ei) return ;

    // finding pivotidx 
    int pi=partition(arr,si,ei);

    quicksort(arr,si,pi-1);
    quicksort(arr,pi+1,ei);
}

int main(){
    int arr[]={0,2,-4,1,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before applying quick sort : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // quick sort algo -:

    quicksort(arr,0,n-1);

    cout<<"After applying quick sort algorithm : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

// Before applying quick sort : 0 2 -4 1 5 
// After applying quick sort algorithm : -4 0 1 2 5 



