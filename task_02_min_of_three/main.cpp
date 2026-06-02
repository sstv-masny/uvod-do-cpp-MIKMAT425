
#include <iostream>

int main() {
    long long a,b,c;
    long bs=0;
    if (!(std::cin >> a,b,c)) return 0;
    else {
        if(a<b)
        bs=a;
            else bs=b;
        if (bs<c) std::cout<<bs;
            else std::cout<<c;
    }
    return 0;
}
