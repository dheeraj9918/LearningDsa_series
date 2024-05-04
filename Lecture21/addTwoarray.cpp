#include <iostream>
#include <vector>

using namespace std;

vector<int> someOftwoArry(int a[], int b[], int n, int m)
{
    int i = n - 1;
    int j = m - 1;
    int carry = 0;
    vector<int> ans;

    while (i >= 0 && j >= 0)
    {
        int value1 = a[i];
        int value2 = b[j];
        int sum = value1 + value2 + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }

    // Second case
    while (i >= 0)
    {
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }

    // Third case
    while (j >= 0)
    {
        int sum = b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }

    // Last carry
    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }

    return ans;
}

vector<int> reverse(vector<int> v)
{
    int s = 0;
    int e = v.size() - 1;
    while (s < e)
    {
        swap(v[s++], v[e--]);
    }
    return v;
}

int main()
{
    int a[4] = {1, 5, 2, 3};
    int b[4] = {8, 4, 2, 3};

    vector<int> result = someOftwoArry(a, b, 4, 4);
    result = reverse(result);
    for (int i = 0; i < result.size(); ++i)
    {
        cout << result[i] << " ";
    }

    return 0;
}
