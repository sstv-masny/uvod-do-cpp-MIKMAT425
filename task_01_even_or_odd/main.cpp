
#include <iostream>
int main() {
    long long n;
    if (!(std::cin >> n))
        return 0;
    else if (n % 2 == 0) {
        std::cout << "even";
    }

    else {
        std::cout << "odd";
    }
    return 0;
}
