
#include <iostream>
    using namespace std;

int main() {
    long long y;
    
    // Načítanie vstupu (ak zlyhá, program skončí)
    if (!(cin >> y)) return 0;

    // Kontrola pravidla pre priestupný rok
    if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
