// Dutch flag algorithm -: 
// Three colors in flag -: So use 3 variables (low,mid,high) and sort the given array of 0's, 1's and 2's .

// 1-: 
#include<iostream>
using namespace std;

int main(){
    int arr[]={1,0,0,2,1,2,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int low=0;
    int mid=0;
    int high=n-1;

    // work using mid variable (just like index) -: 
    while(mid<=high){
        // 3 rules -:
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid]==2){
            swap(arr[mid],arr[high]);
            high--;
        }
        else{ // arr[mid]==1 
            mid++;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}

// 1 0 0 2 1 2 1 0 
// 0 0 0 1 1 1 2 2 






// 2-: By taking input size and array -: 
#include<iostream>
using namespace std;
int main(){ 
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;
  
    int low=0, mid=0, high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid]==2){
            swap(arr[mid],arr[high]);
            high--;
        }else{
            mid++;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}

// Enter the size of the array : 5
// 1 0 0 2 2

// 0 0 1 2 2 




// 3-: Sort the given array using built-in sort -: 

#include<iostream>
#include<algorithm>
using namespace std;
int main(){ 
    int arr[]={3,2,1,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // using built-in sort -: 
    sort(arr,arr+n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}

// 3 2 1 4 5 
// 1 2 3 4 5 
