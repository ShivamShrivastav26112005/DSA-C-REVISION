
// Vector input - 2 Methods -:
// 1-: with given size, 2-: without given size 

// 1-> vector input with given size 5 

#include<iostream>
#include<vector>
using namespace std;
int main(){

    // size of the vector is given -> 5 
    vector<int>v(5); 

    // input the vector 
    for(int i=0; i<5; i++){
        cin>>v[i];
    }

    // output the vector 
    for(int i=0; i<5; i++){
        cout<<v[i]<<" ";
    }
}

// 1 2 3 4 5 
// 1 2 3 4 5







#include<iostream>
#include<vector>
using namespace std;
int main(){

    int n;
    cout<<"Enter the number n : ";
    cin>>n;

    // vector's size is n and n is taken by the user 
    vector<int>v(n); 

    // input the vector 
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    // output the vector 
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
}

// Enter the number n : 7
// 1 2 3 4 5 6 7 -> input by the user
// 1 2 3 4 5 6 7 -> output 







// 2-> vector input without given size  

#include<iostream>
#include<vector>
using namespace std;
int main(){

    // size of the vector is not given 
    vector<int>v; 

    // input the vector 
    for(int i=0; i<5; i++){
        cin>>v[i];
    }

    // output the vector 
    for(int i=0; i<5; i++){
        cout<<v[i]<<" ";
    }
}
// this code gives an error -: 






  

#include<iostream>
#include<vector>
using namespace std;
int main(){

    // size of the vector is not given 
    vector<int>v; 

    // input the vector 
    for(int i=0; i<v.size(); i++){
        // use extra variable to take an vector input 
        int x;
        cin>>x;
        v.push_back(x);
    }

    // output the vector 
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}

// use of i<v.size(). 
// this code does not gives an error, also not display anything only run/execute.









// // 2-> vector input without given size
#include<iostream>
#include<vector>
using namespace std;
int main(){

    // size of the vector is not given 
    vector<int>v; 

    // input the vector 
    for(int i=0; i<7; i++){
        // use extra variable to take an vector input 
        int x;
        cin>>x;
        v.push_back(x);
    }

    // output the vector 
    for(int i=0; i<7; i++){
        cout<<v[i]<<" ";
    }
}

// 1 2 3 6 5 4 8 9 -> take input as you can either 7 or 7+
// 1 2 3 6 5 4 8 -> output -> i<7 menas only 7 ele. is displayed 







    

// // 2-> vector input without given size, take no. of the ele.s by the user input 
#include<iostream>
#include<vector>
using namespace std;
int main(){

    // size of the vector is not given 
    vector<int>v; 

    int n;
    cout<<"Enter the number n : ";
    cin>>n;

    // input the vector 
    for(int i=0; i<n; i++){
        // use extra variable to take an vector input 
        int x;
        cin>>x;
        v.push_back(x);
    }

    // output the vector 
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
}

// Enter the number n : 6
// 1 2 3 4 5 6 7 -> i am taking 7 ele.s 
// 1 2 3 4 5 6 -> but only 6 ele. is printed becoz no. of ele.s is 6 



