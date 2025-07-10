
// Q-> Rotate the given array 'a' by k steps, where k is non-negative.
// Note -: k can be greater than n as well where n is tbe size of array 'a'.


#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void reverseparts(int i, int j, vector<int>& v){
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
}

void reversewhole(vector<int>& v){
    int i=0;
    int j=v.size()-1;
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
}

int main(){
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    display(v);

    int k=2; // rotate 2 times from the last -> at a time only one ele. is comes at the 1st position 
    
    // int n=v.size(); // you can use n where you can use v.size(). 
    reverseparts(0,v.size()-k-1,v);
    display(v);

    reverseparts(v.size()-k,v.size()-1,v);
    display(v);

    // reversewhole(v);
    // display(v);

    //    OR -: 

    reverseparts(0,v.size()-1,v);
    display(v);

}

// 10 20 30 40 50 
// 30 20 10 40 50
// 30 20 10 50 40
// 40 50 10 20 30
