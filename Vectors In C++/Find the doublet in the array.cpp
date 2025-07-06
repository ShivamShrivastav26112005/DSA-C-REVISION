
// Q-> Find the doublet in the array whose sum is equal to the given value x. And 
// index repetition is not allowed means if (1,3) is present then (3,1) is not allowed 

// doublet means those two index whose ele.'s sum is equal to the x.

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

    int x;
    cout<<"Enter x : ";
    cin>>x;


    // index repetition is not allowed means if (1,3) is present then (3,1) is not allowed
    for(int i=0; i<v.size()-1; i++){
        for(int j=i+1; j<v.size(); j++){
            if(v[i]+v[j]==x){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }


    // index repetition is allowed means if (1,3) is present then (3,1) is also allowed
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v.size(); j++){
            if(v[i]+v[j]==x){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
}


// **** index repetition is not allowed means if (1,3) is present then (3,1) is not allowed ****
// Enter x : 3
// (0,1) -> this is index pair, when we found sum of ele.s of these index then it's sum is equal to given x 
// (1,3)




// **** index repetition is allowed means if (1,3) is present then (3,1) is also allowed ****
// Enter x : 3
// (0,1)
// (1,0)
// (1,3)
// (3,1)








// Q-> WAP to copy the contents of one array into another in the reverse order. 

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);

    cout<<"Before copying : ";
    for(int i=0; i<v1.size(); i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    vector<int>v2;
    for(int i=v1.size()-1; i>=0; i--){
        v2.push_back(v1[i]);
    }

    cout<<"After copying : ";
    for(int i=0; i<v2.size(); i++){
        cout<<v2[i]<<" ";
    } 
}

// Before copying : 1 2 3 4 5 
// After copying : 5 4 3 2 1














