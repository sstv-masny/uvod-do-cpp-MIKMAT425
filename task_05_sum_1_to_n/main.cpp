
#include <iostream>
    using namespace std;

int main() {
    long long n;
    if (!(cin >> n)) return 0;

    long long sucet = 0;

    for (long long i = 1; i <= n; ++i) {
        sucet += i;
    }

    cout << sucet << endl;

    return 0;
}
