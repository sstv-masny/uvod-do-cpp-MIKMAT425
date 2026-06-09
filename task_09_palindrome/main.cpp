#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    if (!getline(cin, s)) return 0;

    string t;
    for (char c : s) {
        if (isalnum(static_cast<unsigned char>(c))) {
            t += tolower(static_cast<unsigned char>(c));
        }
    }

    bool palindrome = true;
    int l = 0, r = (int)t.size() - 1;

    while (l < r) {
        if (t[l] != t[r]) {
            palindrome = false;
            break;
        }
        ++l;
        --r;
    }

    cout << (palindrome ? "YES" : "NO") << '\n';
    return 0;
}