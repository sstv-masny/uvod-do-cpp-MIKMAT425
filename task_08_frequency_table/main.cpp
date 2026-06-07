
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    if (!(cin >> n)) return 0;
    
    vector<int> freq(101, 0);
    
    for (int i = 0; i < n; i++) {
        int value;
        if (cin >> value) {
            if (value >= 0 && value <= 100) {
                freq[value]++;
            }
        }
    }
    
    for (int i = 0; i <= 100; i++) {
        if (freq[i] > 0) {
            cout << i << " " << freq[i] << endl;
        }
    }
    
    return 0;
}
