#include <iostream>
using namespace std;

bool palindrome(string b, int i, int j) {
    if (i >= j) {
        return true;
    }
    if (b[i] != b[j]) {
        return false;
    } else {
        return palindrome(b, ++i, --j);
    }
}

int main() {
    string a = "kkk";
    int i = 0;
    int j = a.size() - 1;
    cout << "here are the code" << endl;
    bool ans = palindrome(a, i, j);
    cout << "here are the code" << endl;

    if (ans) {
        cout << "This is a palindrome" << endl;
    } else {
        cout << "This is not a palindrome" << endl;
    }

    return 0;
}
