#include<iostream>
#include<stack>
#include<string>
using namespace std;

int stringIsValid(string &s){
    int n = s.length();

    if(s.length()%2 != 0){
        return -1;
    }
    stack<char> st;

    for(int i = 0; i<n; i++){
        char ch = s[i];
        if(ch == '{'){
            st.push(ch);
        }
        else{
            if(!st.empty() && st.top() == '{'){
                st.pop();
            }else{
                st.push(ch);
            }
        }
    }
    int a = 0 , b = 0;

    while(!st.empty()){
        if(st.top() == '{'){
            a++;
        }else{
            b++;
        }
        st.pop();
    }
    int ans = (a + 1)/2 + (b+1)/2;

    return ans;


    
}

int main(){
     string a = "}{}";
     
   int isValid =  stringIsValid(a);

   cout<<isValid<<endl;

    return 0;
}
