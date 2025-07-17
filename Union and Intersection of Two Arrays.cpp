// You are given two arrays, like:
// a[] = {1, 2, 4, 5, 6}
// b[] = {2, 3, 5, 7}
// Union – Add all elements from both arrays without repeating
// Just like combining two friend groups but no name should repeat.
// Output: 1 2 3 4 5 6 7

  
// Use set<int> because it stores unique values only.
  

#include <bits/stdc++.h>
using namespace std;
void findUnion(int a[], int b[], int n, int m){
    set<int>s;
    for(int i = 0; i < n; i++) s.insert(a[i]);
    for(int i = 0; i < m; i++) s.insert(b[i]);

    cout<<"Union: ";
    for(int x : s) cout << x << " ";
    cout << endl;
}

void findIntersection(int a[], int b[], int n, int m) {
    set<int>s(a, a + n);
    cout<<"Intersection: ";
    for(int i = 0; i < m; i++){
        if(s.find(b[i]) != s.end()){
            cout << b[i] << " ";
            s.erase(b[i]); // to avoid duplicate output
        }
    }
    cout << endl;
}

int main() {
    int a[]={1, 2, 4, 5, 6};
    int b[]={2, 3, 5, 7};
    int n=sizeof(a)/sizeof(a[0]);
    int m=sizeof(b)/sizeof(b[0]);
    findUnion(a, b, n, m);
    findIntersection(a, b, n, m);
}
