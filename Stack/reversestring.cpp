#include<iostream>
#include<stack>

using namespace std;

int main(){
    string str = "prabhat";
    
    stack<char> st;
    // traverse the string and push the character in stack;
    for(int i =0; i<str.length(); i++){
        char ch = str[i];
        st.push(ch);
    }

    //traverse the stack and push the character in ans string;
    string ans = "";
    while(!st.empty()){
        char c = st.top();
        ans.push_back(c);
        st.pop();
    }
    // print the reversed string after reverse the string; or return the string;
    cout<<ans<<endl;


    return 0;
}