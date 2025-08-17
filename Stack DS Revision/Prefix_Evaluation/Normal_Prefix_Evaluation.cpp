// we have to given prefix expression and we have to evaluate those 
// expression and find the ans.

// solved by using single stack. 

// big change -: 
// 1-: loop traverse in reverse/opposite order 
// 2-: 1st find value 1, then value 2, then ans 




#include<iostream>
#include<stack>
using namespace std;

int solve(int val1, int val2, char ch){
    if(ch=='+') return val1+val2;
    else if(ch=='-') return val1-val2;
    else if(ch=='*') return val1*val2;
    else return val1/val2;
}

int main(){
    string s="-/*+79483"; // given prefix expression 
    // we need only one stack -> values stack of int type 
    stack<int>val;

    // traverse in the string in reverse/opposite order -: ***** Big change *****
    for(int i=s.length()-1; i>=0; i--){
        // check if s[i] is a digit (0-9) then push directly those no./value
        // if no. comes then push directly -: 
        if(s[i]>=48 && s[i]<=57){
            val.push(s[i]-48); // push values/no. not a character 
        }
        else{ // operator comes, s[i] -: it is -> *,/,+,-
            // then do work / kaam 
            int val1=val.top(); // ***** Big change ***** 1st-> val1, then val2, then ans 
            val.pop();
            int val2=val.top();
            val.pop();
            int ans=solve(val1,val2,s[i]); 
            val.push(ans);
        }
    }
    cout<<val.top()<<endl;
    cout<<(7+9)*4/8-3;
}

// 5
// 5