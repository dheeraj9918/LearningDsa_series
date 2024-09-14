#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isRedudentOrNot(string str)
{
    int n = str.length();
    stack<int> s;

    for (int i = 0; i < n; i++)
    {
        char ch = str[i];
        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            s.push(ch);
        }
        else
        {
            if (ch == ')')
            {
                bool isRedudent = true;
                while (s.top() != '(')
                {
                    char top = s.top();
                    if (top == '+' || top == '-' || top == '*' || top == '/')
                    {
                        isRedudent = false;
                    }
                    s.pop();
                }
                if(isRedudent == true){
                    return true;
                }
                s.pop();
            }
        }
    }
    return false;
}

int main()
{
    string s = "((a/b))";
    bool isTrue = isRedudentOrNot(s);
    cout<<isTrue<< endl;
    return 0;
}