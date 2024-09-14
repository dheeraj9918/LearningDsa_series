#include<iostream>
#include<stack>

using namespace std;

void sortStack(stack<int> &st, int num){
    if(st.empty()|| (!st.empty() && st.top()< num)){
        st.push(num);
        return ;
    }

    int a = st.top();
    st.pop();
    sortStack(st,num);
    st.push(a);
}

void sortedStack(stack<int> &st){
    if(st.empty()){
        return;
    }

    int num = st.top();
    st.pop();

    sortedStack(st);
    sortStack(st,num);
}

int main(){

    stack<int> st;
    st.push(5);
    st.push(8);
    st.push(1);
    st.push(9);
    st.push(2);

    sortedStack(st);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }

    return 0;
}