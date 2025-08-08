// Stacks -> either you can push the ele. or pop the ele. only. 
// Stacks -> 3 ops. -> push, pop, top. 

// Leetcode Problem -: 
// Q.1 -> Balanced Brackets. -> given opening *(* , closing *)* brackets. -> these are characters 
// for loop is used for traversal on the string only -: 


#include<iostream>
#include<stack>
using namespace std;

bool isBalanced(string s){
    // if the length of the string is odd then it is not possible to given 
    // string is balanced, return false 
    if(s.length()%2 != 0) return false;

    // we make a stack of characters 
    stack<char> st;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='('){ // if opening brackets comes then direct push into the stack 
            st.push(s[i]);
        }else{ // s[i]==')' else closing brackets comes then 
            // check if the size of the stack is empty then return false 
            // i am always pushing opening brack. '(' not closing brack. ')'
            if(st.size()==0) return false;
            else st.pop(); // else pop opening brack. 
        }
    }
    if(st.size()==0) return true;
    else return false;
}
int main(){
    // string s="()()()"; // 1
    string s="()()("; // 0
    cout<<isBalanced(s);
}







// Revision -: 
// Same upper code, here we can show push and pop ops. is performed. 

#include<iostream>
#include<stack>
using namespace std;

bool isBalanced(string s){
    // if the length of the string is odd then it is not possible to given 
    // string is balanced, return false 
    if(s.length()%2!=0) return false;

    // we make a stack of characters 
    stack<char> st;

    // push ops. perform -: 
    for(int i=0; i<s.length(); i++){
        if(s[i]=='('){ // if opening brackets comes then direct push into the stack 
          st.push(s[i]);  
        }else{ // s[i]==')' else closing brackets comes then 
            // check if the size of the stack is empty then return false 
            // i am always pushing opening brack. '(' not closing brack. ')'
            if(st.size()==0) return false; 
        // pop ops. perform -: 
        else st.pop(); // else pop opening brack. 
          }
      }
      if(st.size()==0) return true;
      else return false;
}

int main(){
    // string s="()()()"; // 1
    string s="()()("; // 0
    cout<<isBalanced(s);
}



