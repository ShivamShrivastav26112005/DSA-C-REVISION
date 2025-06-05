// Arrays -: 



// Basics -: 

#include<iostream>
using namespace std;
int main(){
    // declaration 
    int arr[11]; // idx from 0 to 10 

    // initialization 
    arr[0]=0;
    arr[1]=1;
    arr[2]=2;
    arr[3]=3;
    arr[4]=4;
    arr[5]=5;
    arr[6]=6;
    arr[7]=7;
    arr[8]=8;
    arr[9]=9;
    arr[10]=10;

    // printing 
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
    cout<<arr[4]<<endl;
    cout<<arr[5]<<endl;
    cout<<arr[6]<<endl;
    cout<<arr[7]<<endl;
    cout<<arr[8]<<endl;
    cout<<arr[9]<<endl;
    cout<<arr[10]<<endl;
    
}






#include<iostream>
using namespace std;
int main(){
    // declaration and initialization 
    int arr[11]={1,2,3,4,5,6,7,8,9,10,11};
   
    // printing 
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
    cout<<arr[4]<<endl;
    cout<<arr[5]<<endl;
    cout<<arr[6]<<endl;
    cout<<arr[7]<<endl;
    cout<<arr[8]<<endl;
    cout<<arr[9]<<endl;
    cout<<arr[10]<<endl;
    
}





#include<iostream>
using namespace std;
int main(){
    // declaration and initialization 
    int arr[]={1,2,3,4,5,6,7,8,9};
   
    // printing 
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
    cout<<arr[4]<<endl;
    cout<<arr[5]<<endl;
    cout<<arr[6]<<endl;
    cout<<arr[7]<<endl;
    cout<<arr[8]<<endl;
}





#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    // printing ele.s 
    for(int i=0; i<9; i++){
        cout<<arr[i]<<" ";
    }
}
// 1 2 3 4 5 6 7 8 9 







#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    // printing ele.s 
    for(int i=0; i<=8; i++){
        cout<<arr[i]<<" ";
    }
}
// 1 2 3 4 5 6 7 8 9 






#include<iostream>
using namespace std;
int main(){
    int arr[9]={1,2,3,4,5,6,7,8,9};
    // printing ele.s 
    for(int i=0; i<9; i++){
        cout<<arr[i]<<" ";
    }
}
// 1 2 3 4 5 6 7 8 9 






// input and output -: 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of the ele.s "<<endl;
    cin>>n;

    int arr[n]; // size of the array is n and their indices is n-1  
    
    cout<<"Input of the array "<<endl;
    // array input-:
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Output of the array "<<endl;
    // array output -:
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}

// Enter the no. of the ele.s 
// 6 
// Input of the array
// 1 2 3 4 5 6
// Output of the array
// 1 2 3 4 5 6








// Q-> Given an array of marks of students, if the mark of any student is less than 35
// print its roll number.[roll number here refers to the index of the array.] 

#include<iostream>
using namespace std;
int main(){
    // given an array named marks, where mark of 10 stud. is stored -:
    int marks[10]; // size of the array is 10 

    // input the marks of 10 stud.s 
    for(int i=0; i<10; i++){
        cin>>marks[i];
    }

    // output -: print -> roll no.(index)
    for(int i=0; i<10; i++){
        if(marks[i]<35){
            cout<<i<<" "; 
        }
    }

}






// Take n no. of students ? 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of students : "<<endl;
    cin>>n;

    // array declaration, size of the array is n and their indices from 0 to n-1. 
    int marks[n];
    
    // Taking student as input -: 
    cout<<"Enter marks of the students : "<<endl;
    for(int i=0; i<n; i++){
        cin>>marks[i];
    }

    // Printing roll no. as output -: 
    cout<<"Print roll no. of the students : "<<endl;
    for(int i=0; i<n; i++){
        if(marks[i]<35){
            cout<<i<<" ";
        }
    }

}

// Enter the no. of students : 
// 6
// Enter marks of the students :
// 25
// 32
// 02
// 63
// 35
// 98
// Print roll no. of the students :
// 0 1 2




