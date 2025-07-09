
// Two Pointers -: 
// Q-> WAP to reverse the array without using any extra array.
// Algo -: by using two pointer approach -: 



#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    display(v);

    // 1-: using while loop -: 

    int i=0;
    int j=v.size()-1;
    while(i<j){
        swap(v[i],v[j]);
        i++;
        j--;
    }

       // OR -: 

    int i=0;
    int j=v.size()-1;
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }

       // OR -: 

    // 2-: using for loop -: 

    for(int i=0, j=v.size()-1; i<=j; i++,j--){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }

    display(v);

}

// 10 20 30 40 50  
// 50 40 30 20 10









// Reverse parts of the array -: ***  IMP  *** -: 

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
    reverseparts(1,3,v);
    display(v);
    reversewhole(v);
    display(v);

}

// 10 20 30 40 50 
// 10 40 30 20 50
// 50 20 30 40 10
