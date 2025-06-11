// Problem on arrays -: 



// Normal sorting -: using sort() fun.  

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void display(vector<int>& v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int>v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(4);
    v.push_back(5);
    v.push_back(3);

    display(v);
    sort(v.begin(),v.end());
    display(v);

}

// 2 1 4 5 3 
// 1 2 3 4 5







// Q-> Sort the array of 0's and 1's.

// M-1 -: using built-in sort() fun.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// display the array's ele.s 
void display(vector<int>& v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);

    display(v);
    sort(v.begin(),v.end());
    display(v);

}

// 0 1 0 0 1 0 1 0 0 
// 0 0 0 0 0 0 1 1 1






// M-2 -: using extra array/vector. 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// display the array's ele.s 
void display(vector<int>& v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);

    display(v);

    // we make a extra vector 
    vector<int>p;
    for(int i=0; i<v.size(); i++){
        if(v[i]==0){
            p.push_back(0);
        }
    }

    for(int i=0; i<v.size(); i++){
        if(v[i]==1){
            p.push_back(1);
        }
    }

    display(p);
}

// 0 1 0 0 1 0 1 0 0 
// 0 0 0 0 0 0 1 1 1








// M-3 -: using two pass method/technique.
// means 1st pass -> travel in the array/vector and calculate no. of 0's and 1's 
// 2nd pass -> fill the no.s (0's and 1's) inside the same vector/array 
// do not use extra vector/array 

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
    v.push_back(0); 
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);

    display(v);

    // count no. of 0's and 1's 
    int noz=0; 
    int noo=0;
    for(int i=0; i<v.size(); i++){
        if(v[i]==0){
            noz++;
        }else{
            noo++;
        }
    }

    // fill 0's and 1's -> override 
    for(int i=0; i<v.size(); i++){
        if(i<noz){
            v[i]=0;
        }else{
            v[i]=1;
        }
    }
    display(v); 

}

// 0 1 0 0 1 0 1 1 0 
// 0 0 0 0 0 1 1 1 1







// M-4 -: using only one pass/travel -: *** Two Pointer Approach/Method ***


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
    v.push_back(0); 
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);

    display(v);

    // two pointer technique -: 
    int i=0;
    int j=v.size()-1;
    while(i<j){
        if(v[i]==0) i++;
        if(v[j]==1) j--;
        if(v[i]==1 && v[j]==0){
            // int temp=v[i];
            // v[i]=v[j];
            // v[j]=temp;
            // i++;
            // j--;

            // OR -:

            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
    display(v);
}

// 0 1 0 0 1 0 1 1 0 
// 0 0 0 0 0 1 1 1 1







// M-5 -: sorting by making pure function.
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
    // two pointer approach -: 
    int i=0; 
    int j=v.size()-1;
    while(i<j){
        if(v[i]==0) i++;
        if(v[j]==1) j--;
        else if(v[i]==1 && v[j]==0){
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);

    display(v);
    sorting(v);
    display(v);

}

// 1 0 1 0 0 1 0 1 1 0 0 
// 0 0 0 0 0 0 1 1 1 1 1




