
// Merge Sort Algorithms -: 

#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& v1, vector<int>& v2, vector<int>& v){
    // merge these two vectors by using three pointers -: 
    int i=0;
    int j=0;
    int k=0;

    while(i<v1.size() && j<v2.size()){
        if(v1[i]<v2[j]){
            v[k]=v1[i];
            i++;
            k++;
        }else{
            v[k]=v2[j];
            j++;
            k++;
        }
    }

    // two more condition is apply -:

    if(i==v1.size()){
        while(j<v2.size()){
            v[k]=v2[j];
            j++;
            k++;
        }
    }

    if(j==v2.size()){
        while(i<v1.size()){
            v[k]=v1[i];
            i++;
            k++;
        }
    }
}

void mergesort(vector<int>& v){
    int n=v.size();
    // base case -:
    if(n==1) return; 
    int n1=n/2;
    int n2=n-n/2;

    vector<int>v1(n1);
    vector<int>v2(n2);

    // copying ele.s in the brand new vectors 
    for(int i=0; i<n1; i++){
        v1[i]=v[i];
    }
    for(int i=0; i<n2; i++){
        v2[i]=v[i+n1];
    }

    // applying merge sort on the two brand new array/vector -: 

    // recursion -:

    mergesort(v1);
    mergesort(v2);

    // after apply merge sort i am merging the these two vectors. 

    merge(v1,v2,v);
}

int main(){
    int arr[]={4,3,5,2,6,1,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before apply merge sort : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // merge sort algo -:
    // for applying merge sort i am using vector in place of array.
    // so we insert array's ele.s into the vector.

    vector<int>v (arr,arr+n);
    cout<<"Display the vector's ele. : ";
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // apply merge sort algo -: 

    mergesort(v);

    cout<<"After merge sort the ele.s is : ";
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;
}

// Before apply merge sort : 4 3 5 2 6 1 7 
// Display the vector's ele. : 4 3 5 2 6 1 7
// After merge sort the ele.s is : 1 2 3 4 5 6 7

