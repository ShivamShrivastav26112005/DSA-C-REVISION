// Vectors in c++ -: 

// Syntax and basic operations like push_back, pop_back, size, capacity, at, sort etc.


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v;
//     v.push_back(10);
//     v.push_back(20);
//     v.push_back(30);
//     v.push_back(40);
//     v.push_back(50);
//     cout<<v[0]<<endl;
//     cout<<v[1]<<endl;
//     cout<<v[2]<<endl;
//     cout<<v[3]<<endl;
//     cout<<v[4]<<endl;
//     cout<<v.size()<<endl;
// }

// // 10
// // 20
// // 30
// // 40
// // 50
// // 5




// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v;

//     v.push_back(10);
//     cout<<v.size()<<endl; // 1
//     cout<<v.capacity()<<endl; // 1

//     v.push_back(20); 
//     cout<<v.size()<<endl; // 2
//     cout<<v.capacity()<<endl; // 2

//     v.push_back(30);
//     cout<<v.size()<<endl; // 3
//     cout<<v.capacity()<<endl; // 4

//     v.push_back(40); 
//     cout<<v.size()<<endl; // 4
//     cout<<v.capacity()<<endl; // 4
 
//     v.push_back(50);
//     cout<<v.size()<<endl; // 5
//     cout<<v.capacity()<<endl; // 8

//     cout<<v[0]<<endl; // 10
//     cout<<v[1]<<endl; // 20
//     cout<<v[2]<<endl; // 30
//     cout<<v[3]<<endl; // 40 
//     cout<<v[4]<<endl; // 50

//     cout<<v.size()<<endl; // 5
//     cout<<v.capacity()<<endl; // 8

// }

// // 1
// // 1
// // 2
// // 2
// // 3
// // 4
// // 4
// // 4
// // 5
// // 8
// // 10
// // 20
// // 30
// // 40
// // 50
// // 5
// // 



// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     // vector declaration -:
//     vector<int>v;

//     // vector initialization -: 
//     v.push_back(10);
//     // insert ele. from the last of the vector/array 
//     v.push_back(20); 
//     v.push_back(30);
//     v.push_back(40); 
//     v.push_back(50);

//     for(int i=0; i<v.size(); i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"Size is : "<<v.size()<<endl; // size is 5
//     cout<<"Capacity is : "<<v.capacity()<<endl; // here, capacity is 8 

//     // remove ele. from the last of the vector/array 
//     v.pop_back();

//     for(int i=0; i<v.size(); i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"Size is : "<<v.size()<<endl;

//     v.pop_back();
//     v.pop_back();

//     for(int i=0; i<v.size(); i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"Size is : "<<v.size()<<endl; // size is 2
//     cout<<"Capacity is : "<<v.capacity()<<endl;  // here, also capacity is 8 
//     // capacity can't be changed once declared but size can be changed 


//     // size of the vector is automatically changed/updated but capacity is not changed
//     // while we perform pop_back() ops. 
    
// }

// // 10 20 30 40 50 
// // Size is : 5
// // Capacity is : 8
// // 10 20 30 40
// // Size is : 4
// // 10 20
// // Size is : 2
// // Capacity is : 8



// // vector with size -: 
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     // vector declaration with initialization -: 
//     // size of the vector is 5 with default value 0. 
//     vector<int>v(5);
//     cout<<v.size()<<endl; // 5
//     cout<<v.capacity()<<endl; // 5

//     cout<<v[0]<<endl; // 0
//     cout<<v[4]; // 0

// }



// // Make a vector of size 10 with default values 7.
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v(10,7);

//     cout<<v[0]<<endl; // 7
//     cout<<v[9]<<endl; // 7
 
//     cout<<v.size(); // 10 

// }


