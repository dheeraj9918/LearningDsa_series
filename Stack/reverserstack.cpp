#include<iostream>
#include<stack>

using namespace std;

// Function to insert an element at the bottom of the stack
void insertAtbottom(stack<int> &st , int a){
    if(st.empty()) {
        st.push(a);
        return;
    }
    // Store the top element
    int num = st.top();  
    st.pop();  
    insertAtbottom(st, a);  
    st.push(num);  // Push the stored top element back
}

// Function to reverse the stack (passed by reference)
void reverseStack(stack<int> &st) {
    if(st.empty()) {
        return;
    }
    int num = st.top();  // Store the top element
    st.pop();  
    reverseStack(st);  // Recursively call to reverse the remaining stack
    insertAtbottom(st, num);  // Insert the stored element at the bottom
}

int main() {
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
   
    // Reverse the stack
    reverseStack(s);

    // Print the reversed stack
    cout << "Stack printed from top to bottom: ";
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}
