#include <iostream>
#include <cstdlib>
using namespace std;

long long gcdll(long long a, long long b) {
    a = llabs(a);
    b = llabs(b);

    while (b != 0) {
        long long r = a % b;
        a = b;
        b = r;
    }

    return a;
}

int main() {
    long long p, q;
    if (!(cin >> p >> q)) return 0;

    long long g = gcdll(p, q);

    p /= g;
    q /= g;

    if (q < 0) {
        p = -p;
        q = -q;
    }

    cout << p << " " << q;

    return 0;
}