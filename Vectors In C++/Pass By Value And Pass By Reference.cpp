

// pass by value -: me new array/vector create hota hai bar-bar, original array/vector me koi bhi change nhi hota
// pass by reference -: me new array/vector create nhi hota, original array/vector me hi changes hote hai 


// Passing vectors to function -: By both (pass by value) also (pass by reference)-> (use & symbol)-:

// 1-: pass by value -:
#include<iostream>
#include<vector>
using namespace std;
// vector is passed so, we make a vector named (a) to store those passed vector (v).
int change(vector<int> a){ // a is passed by value
    // update -: 
    a[0]=100;
    // after updation print the vector 
    for(int i=0; i<a.size(); i++){ // new vector is created and update the value in the new vector not in the original vector 
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int>v;
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);
    // normal printing before updation 
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // change the vector and also printing 
    change(v); // vector v is passed 
    // printing after updation
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}

// 10 10 10 10 10 -> normal printing before updation 
// 100 10 10 10 10 -> change the vector -> update value in the new vector 
// 10 10 10 10 10 -> printing after updation -> original vector is not changed 











// 2-: pass by reference -: used only (&) operator.
#include<iostream>
#include<vector>
using namespace std;
// vector is passed so, we make a vector named (a) to store those passed vector (v).
int change(vector<int> &a){ // a is passed by reference 
    // update -: 
    a[0]=100;
    // after updation print the vector 
    for(int i=0; i<a.size(); i++){ // new vector is not created and update the value in the original vector
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int>v;
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);
    // normal printing before updation 
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // change the vector and also printing 
    change(v); // vector v is passed 
    // printing after updation
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}

// 10 10 10 10 10 -> normal printing before updation 
// 100 10 10 10 10 -> change the vector -> update value in the original vector 
// 100 10 10 10 10 -> printing after updation -> original vector is changed now 

