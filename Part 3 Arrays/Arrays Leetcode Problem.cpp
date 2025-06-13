

// Q-> Sort the array of 0's, 1's and 2's. (leetcode 75). (without using extra space)

// M-1 -: Algo-: By using counting technique, counting the no.s. 
// count no.of 0's, no.of 1's and no.of 2's.

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
    int noz=0;
    int noo=0;
    int ntw=0;
    
    // count no.of 0's, 1's and 2's 
    for(int i=0; i<v.size(); i++){
        if(v[i]==0){
            noz++;
        }else if(v[i]==1){
            noo++;
        }else{
            ntw++;
        }
    }

    // filling no.of 0's, 1's and 2's. (override to the same vector v).
    for(int i=0; i<v.size(); i++){
        // use of indexing (i)
        if(i<noo){
            v[i]=0;
        }else if(i<(noz+noo)){
            v[i]=1;
        }else{
            v[i]=2;
        }
    }
}
int main(){
    vector<int>v;
    v.push_back(2);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(0);
    v.push_back(1);

    display(v);
    sorting(v);
    display(v);
}

// 2 0 0 1 2 0 1 2 2 0 1 
// 0 0 0 1 1 1 1 2 2 2 2 









// M-2 -: Three Pointer Approach/Method/Techniques -: Solve In One Pass. -> algo -> three pointer tech. 
// low, mid and high. 

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
    // Three pointer tech. ->  low, mid and high. 
    // int low=0;
    // int mid=0;
    // int high=v.size()-1;

    // while(mid<=high){
    //     if(v[mid]==2){
    //         swap(v[mid],v[high]);
    //         high--;
    //     } 

    //     else if(v[mid]==0){
    //         swap(v[mid],v[low]);
    //         low++;
    //         mid++;
    //     }

    //     else { // (v[mid]==1)
    //         mid++;
    //     }
    // }

    
    // OR -:


    int low=0;
    int mid=0;
    int high=v.size()-1;
    while(mid<=high){
        if(v[mid]==2){

            // swap(v[mid],v[high]);
            // high--;

            // Or -: 

            int temp=v[mid];
            v[mid]=v[high];
            v[high]=temp;
            high--;

        }
        else if(v[mid]==0){
            swap(v[mid],v[low]);
                low++;
                mid++;
        }
        else{
            mid++;
        }
    }
}
int main(){
    vector<int>v;

    v.push_back(2);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(0);
    v.push_back(1);

    display(v);
    sorting(v);
    display(v);

}




// 2 0 0 1 2 0 1 2 2 0 1 
// 0 0 0 0 1 1 1 2 2 2 2

