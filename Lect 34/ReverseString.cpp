#include <iostream>
using namespace std;

void reversestring(string& s, int i, int j)
{
    if (i > j)
    {
        return;
    }
    else{
        swap(s[i], s[j]);
        i++;
        j--;
    }
    
    reversestring(s, i, j);
}

int main()
{
    string name = "abcdef";
    int i = 0;
    int j = name.length() - 1;
    reversestring(name, i, j);
    cout<<name<<endl;

    return 0;
}
