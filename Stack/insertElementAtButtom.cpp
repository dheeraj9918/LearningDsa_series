#include<iostream>
#include<stack>

using namespace std;
void insertAtBottom(stack<int> &st, int a){
    if(st.empty()){
        st.push(a);
        return;
    }
    int x = st.top();
    st.pop();
    insertAtBottom(st,a);
    st.push(x);
}

int main(){
    stack<int> s;
    s.push(10);
    s.push(14);
    s.push(15);
    int a = 45;
    insertAtBottom(s,a);
    cout<<"stack printing at the top to bottom: ";
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}