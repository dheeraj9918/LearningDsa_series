#include <iostream>
#include <stack>
using namespace std;

class Stack
{
public:
    int *arr;
    int top;
    int size;
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    // push the element in the stack
    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack overflow" << endl;
        }
    }
    // remove the element of the stack at the top
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack is Underflow" << endl;
        }
    }
    // check the top of stack element
    int peak()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }
    //check the stack is empty
    bool isEmpty()
    {
        if (top == -1)
        {
           
            return true;
        }
        else
        { 
            return false;
        }
    }
};

int main()
{

    Stack st(5);
    st.push(45);
    st.push(46);
    st.push(47);
    st.push(49);
    st.push(46);
    // st.push(47);
    // st.push(49);

    cout<<st.isEmpty()<<endl;
    cout<<st.peak()<<endl;
    st.pop();
    cout<<st.peak()<<endl;

    if(st.isEmpty()){
        cout<<"Stack is empty mere dost "<<endl;
    }else{
        cout<<"Stack is not empty mere dost"<<endl;
    }
    // stack<int> s;

    // s.push(5);
    // s.push(6);

    // s.pop();

    // cout << "top element of the stack: " << s.top() << endl;
    // return 0;
}