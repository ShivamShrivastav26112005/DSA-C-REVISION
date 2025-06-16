
// Q-> Merge two sorted arrays. (Leetcode-88).
// two sorted arrays is given, you have to sort those two arrays and merge in single array -:
// Algo -> Three pointer tech. is used. (i,j,k)



// 1-: return type is void -: 
#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

// return type is void so, you don't have to return any vector at the end. 
void merge(vector<int>&v, vector<int>& s){
    int n=v.size();
    int m=s.size();

    vector<int>ans(n+m);

    int i=0; 
    int j=0;
    int k=0;

    while(i<n && j<m){
        if(v[i]<s[j]){
            ans[k]=v[i];
            i++;
            k++;
        }else{ // v[i]>s[j]
            ans[k]=s[j];
            j++;
            k++;
        }
    }

    if(i==n){
        while(j<m){
            ans[k]=s[j];
            j++;
            k++;
        }
    }

    if(j==m){
        while(i<n){
            ans[k]=v[i];
            i++;
            k++;
        }
    }

    display(ans);

}

int main(){
    vector<int>v;
    v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    display(v);

    vector<int>s;
    s.push_back(1);
    s.push_back(3);
    s.push_back(5); 
    display(s);

    // int x=sum(a,b); return type of sum is (int) so, we store this into int,

    // fun. calling -> no return type here -> use void 
    merge(v,s);

}

// 2 4 6 
// 1 3 5 
// 1 2 3 4 5 6 









// 2-: return type is vector -: 
#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

// return type is vector so, you have to return vector at the end, you can also write here, void as a return type 
vector<int> merge(vector<int>&v, vector<int>& s){
    int n=v.size();
    int m=s.size();

    vector<int>ans(n+m);

    int i=0; 
    int j=0;
    int k=0;

    while(i<n && j<m){
        if(v[i]<s[j]){
            ans[k]=v[i];
            i++;
            k++;
        }else{ // v[i]>s[j]
            ans[k]=s[j];
            j++;
            k++;
        }
    }

    if(i==n){
        while(j<m){
            ans[k]=s[j];
            j++;
            k++;
        }
    }

    if(j==m){
        while(i<n){
            ans[k]=v[i];
            i++;
            k++;
        }
    }
    return ans;

}

int main(){
    vector<int>v;
    v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    display(v);

    vector<int>s;
    s.push_back(1);
    s.push_back(3);
    s.push_back(5); 
    display(s);

    // int x=sum(a,b); return type of sum is (int) so, we store this into int,
    // similarly return type of merge is vector so, we store this into vector. 
    vector<int>ans=merge(v,s);
    display(ans);

}

// 2 4 6 
// 1 3 5 
// 1 2 3 4 5 6 
