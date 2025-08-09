
// Q.2 -> Remove Consecutive Duplicates in a string. 


#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

string remove(string s){
    stack<char> st;
    // initially push 1st character of the string into the stack 
    st.push(s[0]);
    // traverse in the string 
    for(int i=1; i<s.length(); i++){
        if(s[i]!=st.top()) st.push(s[i]);
    }
    // make a empty string where add all the characters of the stack 
    s="";
    while(st.size()>0){
        s+=st.top();
        st.pop();
    }
    // reverse the string to get the final ans. 
    reverse(s.begin(), s.end());
    return s; // return final ans string s 
}

int main(){
    string s="aaabbcddaabffg";
    cout<<s<<endl;
    s=remove(s);
    cout<<s<<endl;
}

// aaabbcddaabffg
// abcdabfg








