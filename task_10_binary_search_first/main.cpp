#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int *a = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int x;
    cin >> x;

    int left = 0;
    int right = n - 1;
    int result = -1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (a[mid] == x) {
            result = mid;
            right = mid - 1;
        } else if (a[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    cout << result;

    delete[] a; // uvoľnenie pamäte
    return 0;
}