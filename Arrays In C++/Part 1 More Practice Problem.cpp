
// Q -> Calculate the sum of all the ele.s in the given array. 

#include<iostream>
using namespace std;
int main()
{
    // size of the array is n 
    int n;
    cout<<"Enter size of array "<<endl;
    cin>>n;

    // declaration of the array 
    int arr[n];

    // Input the array'ele.
    cout<<"Enter the array'ele. "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // sum of the array'ele. 
    int sum=0;
    cout<<"Sum of all the ele.s in the given array "<<endl;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }

    cout<<sum;

}

// Enter the no. of ele.s 
// 5
// Enter the array'ele.
// 10 20 30 20 5 
// Sum of all the ele.s in the given array     
// 85






// Linear Search -: ******* use flag while searching an ele. ********
// Q-> Find the ele. x in the array. Take array and x as input.

#include<iostream>
using namespace std;
int main(){
    // size of the array is n 
    int n;
    cout<<"Enter the size of the array "<<endl;
    cin>>n; 

    // declare array 
    int arr[n];

    // input array 
    cout<<"Enter the array's ele. "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // input the ele. x
    int x;
    cout<<"Enter the ele. x "<<endl;
    cin>>x;

    // linear search 
    bool flag = false; // check mark -: 
    for(int i=0; i<n; i++){
        if(arr[i]==x){
            flag=true;
        }
    }
    if(flag==true){
        cout<<"Present";
    }else{
        cout<<"Not Present";
    }

}

// Enter the size of the array 
// 5
// Enter the array's ele.
// 1 2 3 4 5 
// Enter the ele. x
// 9
// Not Present







// Q-> Find the maximum value out of all the ele.s in the array?
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the array's size :";
    cin>>n;

    int arr[n];

    cout<<"Enter the array ele.s : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Maximum ele. is : ";
    int max=arr[0];
    // or int max=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max;

}

// Enter the array's size :5
// Enter the array ele.s : 1 2 3 8 6
// Maximum ele. is : 8







// Q-> Find the second largest ele. in the given array?
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the array's size : ";
    cin>>n;

    int arr[n];

    cout<<"Enter the array ele.s : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int max1=INT_MIN;
    int max2=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>max1){
            max1=arr[i];
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i]!=max1 && arr[i]>max2){
            max2=arr[i];
        } 
    }
    cout<<"Second largest ele. is : ";
    cout<<max2<<endl;

    cout<<"First largest ele. is : ";
    cout<<max1;
}

// Enter the array's size : 5
// Enter the array ele.s : 1 3 2 5 4
// Second largest ele. is : 4
// First largest ele. is : 5
