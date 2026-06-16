
#include <iostream>
using namespace std;

int main() {
    long long n;
    
    // Načítanie vstupu
    if (!(cin >> n)) return 0;

    // Ak užívateľ zadá priamo 0, rovno vypíšeme 0
    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }

    long long obratene = 0;

    // Cyklus beží, kým z čísla n neodrežeme všetky číslice
    while (n > 0) {
        long long posledna_cislica = n % 10;   // Zoberieme poslednú číslicu
        obratene = (obratene * 10) + posledna_cislica; // Pridáme ju na koniec nového čísla
        n = n / 10;                            // Odrežeme poslednú číslicu z pôvodného čísla
    }

    // Výpis otočeného čísla (vedúce nuly zmiznú automaticky)
    cout << obratene << endl;

    return 0;
}
