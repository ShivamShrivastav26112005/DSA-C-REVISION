// Q-> Find the first, second, third and fourth largest ele. in the given array.

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int arr[n];

    cout<<"Enter the ele.s of the array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"First largest ele. is : ";
    int max1=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>max1){
            max1=arr[i];
        }
    }
    cout<<max1<<endl;

    cout<<"Second largest ele. is : ";
    int max2=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]!=max1 && arr[i]>max2){
            max2=arr[i];
        }
    }
    cout<<max2<<endl;

    cout<<"Third largest ele. is : ";
    int max3=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]!=max1 && arr[i]!=max2 && arr[i]>max3){
            max3=arr[i];
        }
    }
    cout<<max3<<endl;

    cout<<"Fourth largest ele. is : ";
    int max4=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]!=max1 && arr[i]!=max2 && arr[i]!=max3 && arr[i]>max4){
            max4=arr[i];
        }
    }
    cout<<max4;
}

// Enter the size of the array : 5
// Enter the ele.s of the array : 2 5 3 1 4
// First largest ele. is : 5
// Second largest ele. is : 4
// Third largest ele. is : 3
// Fourth largest ele. is : 2








// Q-2-> Count no. of ele.s in the given array greater than a given no. x.

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int arr[n];

    cout<<"Enter the ele.s of the array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int x;
    cout<<"Enter the no. x : ";
    cin>>x;

    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i]>x){
            count++;
        }
    }
    cout<<"Total no. is : ";
    cout<<count;
}

// Enter the size of the array : 10 
// Enter the ele.s of the array : 2 5 3 6 9 4 1 5 8 3 
// Enter the no. x : 6
// Total no. is : 2








// Q.3 -: find the factorial of the odd no.s only .

#include<iostream>
using namespace std;
int fact(int n){
    int f=1;
    for(int i=2; i<=n; i++){
        if(i%2!=0){
            f*=i;
        }
    }
    return f;
}
int main(){
    int n;
    cout<<"Enter the number n : ";
    cin>>n;
    cout<<fact(n);
}


// Enter the number n : 7 -> {1,3,5,7} -> 105
// 105


// Array Problems Done. 
