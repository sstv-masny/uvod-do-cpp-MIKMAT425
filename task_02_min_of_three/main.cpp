
#include <iostream>
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    long long a,b,c;
    if (!(std::cin >> a >> b >> c)) return 0;
       std:: cout << std::min(a,b,c);
    return 0;
}
