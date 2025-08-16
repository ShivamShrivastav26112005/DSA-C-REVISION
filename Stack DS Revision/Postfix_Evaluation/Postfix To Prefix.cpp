// -> Postfix To Prefix Conversion -: 

// Same code as postfix to infix conversion but the order has been changed
// change the order of the solve() fun. -> from infix(val1,oper,val2) to prefix(oper,val1,val2)

#include<iostream>
#include<stack>
using namespace std;

// main hai hmara solve() fun -> hme prefix(oper,val1,val2) banana hai and usse string me dalna hai 
string solve(string val1, string val2, char ch){
    string s="";
    s.push_back(ch); // operator 
    s+=val1; // value 1 
    s+=val2; // value 2 
    return s;
}

int main(){
    string s="79+4*8/3-"; // given postfix expression 
    // we need one stack -> values stack of string type 
    stack<string> val;

    // traverse in the string 
    for(int i=0; i<s.length(); i++){
        // check if s[i] is a digit (0-9) then push directly those no./value
        if(s[i]>=48 && s[i]<=57){
            val.push(to_string(s[i]-48)); // push values/no. as a string not a character so, we convert value to string using to_string() fun. 
        }
        else{ // else operator comes, s[i] -: it is -> *,/,+,-
            // then do work / kaam 
            string val2=val.top();
            val.pop();
            string val1=val.top();
            val.pop();
            string ans=solve(val1,val2,s[i]); 
            val.push(ans);
        }
    }
    cout<<val.top()<<endl; // now string is present at the top of the val stack 
}

// -/*+79483 -> ans -> prefix 





