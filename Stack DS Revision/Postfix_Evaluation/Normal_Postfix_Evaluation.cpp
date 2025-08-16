// Q -> we have to given expression, we have to evaluate  
// those expression and return the ans. 

// by using single stack -: 

// in this ques we have to given a postfix expression -: 

// postfix and prefix me brackets nhi hote hai 
// only infix me brackets hote hai 




// Postfix Evaluation -: 

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
    string s="79+4*8/3-"; // given postfix expression 
    // we need one stack -> values stack of int type 
    stack<int>val;

    // traverse in the string 
    for(int i=0; i<s.length(); i++){
        // check if s[i] is a digit (0-9) then push directly those no./value
        if(s[i]>=48 && s[i]<=57){
            val.push(s[i]-48); // push values/no. not a character 
        }
        else{ // operator comes, s[i] -: it is -> *,/,+,-
            // then do work / kaam 
            int val2=val.top();
            val.pop();
            int val1=val.top();
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




