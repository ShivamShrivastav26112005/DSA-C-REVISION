// Prefix To Infix Conversion.  


#include<iostream>
#include<stack>
using namespace std;

string solve(string val1, string val2, char ch){
    // convert-> prefix to infix  
    // infix is -> value1, operator, value2 
    string s=""; // becoz we have to return infix expression so, we make a string 
    s+=val1; // value1 
    s.push_back(ch); // operator 
    s+=val2; // value2 
    return s;
}

int main(){
    string s="-/*+79483"; // given prefix expression 
    // we need only one stack -> values stack of string type 
    stack<string>val;

    // traverse in the string in reverse/opposite order -:
    for(int i=s.length()-1; i>=0; i--){
        // check if s[i] is a digit (0-9) then push directly those no./value
        // if no. comes then push directly -: 
        if(s[i]>=48 && s[i]<=57){
            val.push(to_string(s[i]-48)); // push values/no. as a string not a integer or character 
        }
        else{ // operator comes, s[i] -: it is -> *,/,+,-
            // then do work / kaam 
            string val1=val.top(); // ***** Big change ***** 1st-> val1, then val2, then ans 
            val.pop();
            string val2=val.top();
            val.pop();
            string ans=solve(val1,val2,s[i]); 
            val.push(ans);
        }
    }
    cout<<val.top()<<endl;
}

// 7+9*4/8-3



    
// Practice -: 
// Prefix To Postfix Conversion.  

#include<iostream>
#include<stack>
using namespace std;

string solve(string val1, string val2, char ch){
    // convert-> prefix to postfix  
    // postfix is -> value1, value2, operator
    string s=""; // becoz we have to return infix expression so, we make a string  
    s+=val1; // value1 
    s+=val2; // value2 
    s.push_back(ch); // operator
    return s;
}

int main(){
    string s="-/*+79483"; // given prefix expression 
    // we need only one stack -> values stack of string type 
    stack<string>val;

    // 1-: ***** traverse in the string in reverse/opposite order -: *****
    for(int i=s.length()-1; i>=0; i--){
        // check if s[i] is a digit (0-9) then push directly those no./value
        // if no. comes then push directly -: 
        if(s[i]>=48 && s[i]<=57){
            val.push(to_string(s[i]-48)); // push values/no. as a string not a integer or character 
        }
        else{ // operator comes, s[i] -: it is -> *,/,+,-
            // then do work / kaam 
            // 2-: ***** 1st value1 then value2 then ans. *****
            string val1=val.top(); 
            val.pop();
            string val2=val.top();
            val.pop();
            string ans=solve(val1,val2,s[i]); 
            val.push(ans);
        }
    }
    cout<<val.top()<<endl;
}

// 79+4*8/3- 
