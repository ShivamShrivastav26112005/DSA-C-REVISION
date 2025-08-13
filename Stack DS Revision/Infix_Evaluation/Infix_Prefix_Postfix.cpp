// IMP -: 

// Infix Expression or infix evaluation -: 
// Infix Evaluation (without brackets) -: 



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
    string s="2+6*4/8-3"; 
    // we need two stacks, 1 for values, 1 for ops. 
    stack<int>val;
    stack<int>ops;
    for(int i=0; i<s.length(); i++){
        // check if s[i] is a digit (0-9) 
        // to check, i am finding ascii values 

        // int ascii = (int)(s[i]);
        // if(ascii>=48 && ascii<=57) // then it is a digit 
        // // becoz ascii value of 0 is 48 and 9 is 57.

        // OR -: we can also write -: 

        // s[i] -> ek character of the string / single digit of the string 
        // here we compare character(s[i]) to the integer(48) but it compare ascii value of the character to the integer. 
        if(s[i]>=48 && s[i]<=57){ // digit 
            val.push(s[i]-48); // here push no. not char. 
        }
        // means-> (s[i]-48) -> (char.)-(integer) -> (ascii value of the character)-(integer) -> resultant -> gives integer 
        else{ // s[i] -> it is -: *,/,+,- 
            if(ops.size()==0 || priority(s[i])>priority(ops.top())){
                ops.push(s[i]);
            }else{ // priority(s[i])<=priority(ops.top())
                while(ops.size()>0 && priority(s[i])<=priority(ops.top())){
                    // kaam -: i have to do val1 ops val2. 
                    char ch=ops.top();
                    ops.pop();
                    int val2=val.top();
                    val.pop();
                    int val1=val.top();
                    val.pop();
                    int ans=solve(val1,val2,ch);
                    val.push(ans);
                }
                ops.push(s[i]);
            }
        }
    }

    // at the end, the operator stack can have values 
    // so make it empty 
    // do your work/kaam -: 
    while(ops.size()>0){
        char ch=ops.top();
        ops.pop();
        int val2=val.top();
        val.pop();
        int val1=val.top();
        val.pop();
        int ans=solve(val1,val2,ch);
        val.push(ans);            
    }
    cout<<val.top()<<endl;
    cout<<2+6*4/8-3;
}

// 2
// 2












// Infix evaluation -: 

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
    string s="2+3*4/4-3";

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
        // solve-: pop 2 values from the val stack and pop one operator and perform operation and find ans then again push ans into the val stack 

        if(s[i]>=48 && s[i]<=57){ // then it is digit -> (0-9)
            val.push(s[i]-48); // push value/no. not character
        } 
        else{ // not a digit, it is a operator -> (*,/,+,-)
            if(oper.size()==0 || priority(s[i]) > priority(oper.top()))
                oper.push(s[i]);
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
    cout<<2+3*4/4-3;
}


// 2
// 2




