// Prefix Expressions -: 

// Q-1-: convert infix to prefix and return. 


// These are expressions -: 
// infix -: val1,/operator, val2
// prefix -: operator, val1, val2 
// postfix -: val1, val2, operator 
// We have to given infix expression, we have to convert infix to prefix by using stack -: 


#include<iostream>
#include<stack>
using namespace std;

int priority(char ch){
    if(ch=='+' || ch=='-') return 1;
    else return 2; // * , /
}

string solve(string val1, string val2, char ch){
    // we have to store prefix in the ans 
    // prefix is -: oper, val1, val2 ******** IMP *********
    string s="";
    s.push_back(ch);
    s+=val1;
    s+=val2;
    return s; 
}

int main(){
    string s="(7+9)*4/8-3"; // infix expression is given 

    // we make two stacks 1 for values and 1 for operator 
    stack<string> val;
    stack<char> oper;

    // traverse in the string 
    for(int i=0; i<s.length(); i++){
        // algo-: if 1st character is a digit then push into the val 
        // if 1st character is a operator (*,/,+,-) then check 
        // (a)-: if operator stack is empty then push directly 
        // (b)-: if priority(s[i]) > priority(st.top()) then push 
        // (c)-: if priority(s[i]) <= priority(st.top()) then some work/kaam karo -> solve() fun.
        // (d)-: some new cases/conditions is added 

        // solve-: pop 2 values from the val stack and pop one operator and perform operation and find ans then again push ans into the val stack 

        if(s[i]>=48 && s[i]<=57){ // then it is digit -> (0-9)
            val.push(to_string(s[i]-48)); // push value/no. as a string so, we convert integer/values to string using to_strring() fun. 
        } // s[i]=this is character 
        else{ // not a digit, it is a operator / character -> *,/,+,-,(,) -> also include opening ( , closing  ) brackets then push it to the character stack oper. 
            if(oper.size()==0) oper.push(s[i]); // if stack is empty then push 
            else if(s[i]=='(') oper.push(s[i]); // if our character is opening brackets then push directly 
            else if(oper.top()=='(') oper.push(s[i]); // if opening bracket is already present then also push 
            else if(s[i]==')'){ // if closing bracket comes then do some work / kaam 
                while(oper.top()!='('){ // do work tb tk, jb tk operator ke top per opening bracket na aa jaye 
                    // work -: 
                    string val2=val.top();
                    val.pop();
                    string val1=val.top();
                    val.pop();
                    char ch=oper.top();
                    oper.pop();
                    // call the fun solve() -:
                    string ans=solve(val1, val2, ch);
                    val.push(ans);
                }
                oper.pop(); // opening bracket ko bhi remove kar diya 
            }
            else if(priority(s[i]) > priority(oper.top())) oper.push(s[i]);
            else{ // (priority(s[i]) <= priority(st.top())) then some work 
                while(oper.size()>0 && priority(s[i]) <= priority(oper.top())){
                    string val2=val.top();
                    val.pop();
                    string val1=val.top();
                    val.pop();
                    char ch=oper.top();
                    oper.pop();
                    // call the fun solve() -:
                    string ans=solve(val1, val2, ch);
                    val.push(ans);
                }
                oper.push(s[i]);
            }
        }
    }

    // if till now operator stack is not empty then do some work -: 
    // pop two values from the val stack and pop operator from the oper stack and perform operations 
    if(oper.size()!=0){
        string val2=val.top();
        val.pop();
        string val1=val.top();
        val.pop();
        char ch=oper.top();
        oper.pop();
        string ans=solve(val1, val2, ch);
        val.push(ans);
    }
    cout<<val.top()<<endl;
}

// -/*+79483


