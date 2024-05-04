#include <iostream>
#include <vector>
using namespace std;
int reverse(vector<int> &v)  
{
    int s = 0;
    int e = v.size() - 1;
    while (s <= e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }
}

int  print(const vector<int> &v) 
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v;

    v.push_back(14);
    v.push_back(16);
    v.push_back(11);
    v.push_back(10);
    v.push_back(1);

    cout << "Original array" << endl;
    print(v);

    reverse(v);

    cout << "Reversed array" << endl;
    print(v);

    return 0;
}
