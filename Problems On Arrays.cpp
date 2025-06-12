
// Q-> Move all -ve no.s to beginning and +ve to end with constant extra space. 


// M-1 -: By using two pointer technique. 
#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void sorting(vector<int>& v){
    int i=0; 
    int j=v.size()-1;
    while(i<j){
        if(v[i]<0) i++;
        if(v[j]>0) j--;
        else if(v[i]>0 && v[j]<0){

            // swap(v[i],v[j]);
            // i++;
            // j--;

            // OR -: 

            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;

        }
    }
}

int main(){
    vector<int>v;

    v.push_back(3);
    v.push_back(-4);
    v.push_back(-5);
    v.push_back(7);
    v.push_back(30);
    v.push_back(-67);
    v.push_back(-13);
    v.push_back(30);
    v.push_back(-93);   
    v.push_back(34);
    v.push_back(-83);

    display(v);
    sorting(v);
    display(v);
}

// 3 -4 -5 7 30 -67 -13 30 -93 34 -83 
// -83 -4 -5 -93 -13 -67 30 30 7 34 3 





// Q-> Move all +ve no.s to beginning and -ve to end with constant extra space. 
#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void sorting(vector<int>& v){
    int i=0; 
    int j=v.size()-1;
    while(i<j){
        if(v[i]>0) i++;
        if(v[j]<0) j--;
        else if(v[i]<0 && v[j]>0){

            // swap(v[i],v[j]);
            // i++;
            // j--;

            // OR -: 

            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }
    }
}

int main(){
    vector<int>v;
    v.push_back(3);
    v.push_back(-4);
    v.push_back(-5);
    v.push_back(7);
    v.push_back(30);
    v.push_back(-67);
    v.push_back(-13);
    v.push_back(30);
    v.push_back(-93);   
    v.push_back(34);
    v.push_back(-83);

    display(v);
    sorting(v);
    display(v);
}

// 3 -4 -5 7 30 -67 -13 30 -93 34 -83 
// 3 34 30 7 30 -67 -13 -5 -93 -4 -83 



