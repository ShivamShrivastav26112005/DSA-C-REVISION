// Looping in vector -:

// Q-> Find the last occurrence of x in the array. -> Algo -: apply loop from the last ele./search ele. from the last 
// last occurrence means index of the last ele. x 

  
// Method-1 -: apply loop from the starting/searching ele. from the starting -> it takes lots of time
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(1);
    v.push_back(5);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    int x;
    cout<<"Enter x : ";
    cin>>x;

    int idx=-1;
    for(int i=0; i<=v.size(); i++){
        if(v[i]==x){
            idx=i; 
        }
    }
    cout<<idx;
}

// 1 2 3 1 5 
// Enter x : 1
// 3







// Method-2 -: efficient -> searching ele. from the last 

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(1);
    v.push_back(5);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    int x;
    cout<<"Enter x : ";
    cin>>x;

    int idx=-1;
    for(int i=v.size()-1; i>=0; i--){
        if(v[i]==x){
            idx=i; 
            break;
        }
    }
    cout<<idx;
}


// 1 2 3 1 5 
// Enter x : 1
// 3


// Algo -: Find the "first occurrence(index)" of x in the array -> apply loop from the starting 
// Algo -: Find the "last occurrence(index)" of x in the array -> apply loop from the ending 


