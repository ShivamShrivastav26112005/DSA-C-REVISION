// Problem on arrays -: 



// Normal sorting -: using sort() fun.  

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// void display(vector<int>& v){
//     for(int i=0; i<v.size(); i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     vector<int>v;
//     v.push_back(2);
//     v.push_back(1);
//     v.push_back(4);
//     v.push_back(5);
//     v.push_back(3);

//     display(v);
//     sort(v.begin(),v.end());
//     display(v);

// }

// // 2 1 4 5 3 
// // 1 2 3 4 5



// Q-> Sort the array of 0's and 1's.

// // M-1 -: using built-in sort() fun.
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// // display the array's ele.s 
// void display(vector<int>& v){
//     for(int i=0; i<v.size(); i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){

//     vector<int>v;

//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(0);

//     display(v);
//     sort(v.begin(),v.end());
//     display(v);

// }

// // 0 1 0 0 1 0 1 0 0 
// // 0 0 0 0 0 0 1 1 1


// // M-2 -: using extra array/vector. 
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// // display the array's ele.s 
// void display(vector<int>& v){
//     for(int i=0; i<v.size(); i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){

//     vector<int>v;

//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(0);

//     display(v);

//     // we make a extra vector 
//     vector<int>p;

//     for(int i=0; i<v.size(); i++){
//         if(v[i]==0){
//             p.push_back(0);
//         }
//     }

//     for(int i=0; i<v.size(); i++){
//         if(v[i]==1){
//             p.push_back(1);
//         }
//     }

//     display(p);
// }

// // 0 1 0 0 1 0 1 0 0 
// // 0 0 0 0 0 0 1 1 1

