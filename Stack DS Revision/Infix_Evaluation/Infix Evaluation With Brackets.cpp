
// Infix evaluation (with brackets) -: only some new conditions is added except all the code is same of the above code.
// Infix evaluation (with brackets) -: 


#include<iostream>
#include<stack>
using namespace std;

int priority(char ch){
    if(ch=='+' || ch=='-') return 1;
    else return 2; // * , /
}

int solve(int val1, int val2, char ch){
    if(ch=='+') return val1+val2;
    else if(ch=='-') return val1-val2;
    else if(ch=='*') return val1*val2;
    else return val1/val2;
}

int main(){
    string s="(2+3)*4/7-3"; // bracket is also included

    // we make two stacks 1 for values and 1 for operator 
    stack<int>val;
    stack<char>oper;

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
            val.push(s[i]-48); // push value/no. not character
        } // s[i]=this is character 
        else{ // not a digit, it is a operator -> *,/,+,-,(,) -> also include opening ( , closing  ) brackets 
            if(oper.size()==0) oper.push(s[i]); // if stack is empty then push 
            else if(s[i]=='(') oper.push(s[i]); // if our character is opening brackets then push directly 
            else if(oper.top()=='(') oper.push(s[i]); // if opening bracket is already present then also push 
            else if(s[i]==')'){ // if closing bracket comes then do some work / kaam 
                while(oper.top()!='('){ // do work tb tk, jb tk operator ke top per opening bracket na aa jaye 
                    // work -: 
                    int val2=val.top();
                    val.pop();
                    int val1=val.top();
                    val.pop();
                    char ch=oper.top();
                    oper.pop();
                    // call the fun solve() -:
                    int ans=solve(val1, val2, ch);
                    val.push(ans);
                }
                oper.pop(); // opening bracket ko bhi remove kar diya 
            }
            else if(priority(s[i]) > priority(oper.top())) oper.push(s[i]);
            else{ // (priority(s[i]) <= priority(st.top())) then some work 
                while(oper.size()>0 && priority(s[i]) <= priority(oper.top())){
                    int val2=val.top();
                    val.pop();
                    int val1=val.top();
                    val.pop();
                    char ch=oper.top();
                    oper.pop();
                    // call the fun solve() -:
                    int ans=solve(val1, val2, ch);
                    val.push(ans);
                }
                oper.push(s[i]);
            }
        }
    }

    // if till now operator stack is not empty then do some work -: 
    // pop two values from the val stack and pop operator from the oper stack and perform operations 
    if(oper.size()!=0){
        int val2=val.top();
        val.pop();
        int val1=val.top();
        val.pop();
        char ch=oper.top();
        oper.pop();
        int ans=solve(val1, val2, ch);
        val.push(ans);
    }
    cout<<val.top()<<endl;
    cout<<(2+3)*4/7-3;
}

// -1
// -1






 
