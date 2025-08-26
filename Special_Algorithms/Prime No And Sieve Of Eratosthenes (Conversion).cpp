// Bitwise Operations -: 

// Question -: Convert Binary No To Decimal -: 
// Always use string while converting no or finding subarray etc. Binary always store inside the string.

#include<iostream>
using namespace std;

int decimal(string &binary){
    int n=binary.size();
    int ans=0;
    for(int i=n-1; i>=0; i--){
        // find the character 
        char ch=binary[i];
        // convert last character into a number
        int num=ch-'0';
        // IMP -:
        ans+=num*(1<<(n-i-1));
    }
    return ans;
}

string binary(int num){
    string ans="";
    while(num>0){
        // if no. is even then last bit of binary is 0 and if odd then last bit is 1.
        if(num%2==0){
            ans+='0';
        }else{
            ans+='1';
        }
        num/=2;
    }
    return ans;
}

int main(){
    string str="1111"; // 15 
    cout<<decimal(str)<<endl;
  
    cout<<binary(15);
    return 0;
}

// 15
// 1111








// Given an array of binary bits flip its no.s -: 

#include<iostream>
using namespace std;

int main(){
    int arr[]={0,0,1,1,0,0,1,1,0,1,1,0,1,1,0,0,0};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"Before converting : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // apply algo -: 
    for(int i=0; i<n; i++){
        if(arr[i]==1) arr[i]=0;
        else arr[i]=1;
    }

    cout<<"After converting :  ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
}

// Before converting : 0 0 1 1 0 0 1 1 0 1 1 0 1 1 0 0 0 
// After converting :  1 1 0 0 1 1 0 0 1 0 0 1 0 0 1 1 1

// use of two for lopos -: 
// first loop is used for traversing in the array and second loop is used for picking the ele.s one by one.




// Revise all the ques. from the notebook also code. 
