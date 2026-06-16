
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    long long k;
    if (!(cin >> k)) return 0;

    double cena = 0.0;

    if (k <= 2) {
        cena = 4.0; 
    } else {
        cena = 4.0 + (k - 2) * 1.50; 
    }
    cout  << cena << endl;
    return 0;
}
