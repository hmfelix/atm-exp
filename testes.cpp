#include <iostream>
#include <cmath>

int main() {
    int p;
    long double r;
    int per = static_cast<int>(std::pow(10, 9));
    long double end = std::pow(10, 12);
    std::cout << end << '\n';
    for (long double i = end; i > 0; i--) {
        p = static_cast<int>(i) % per;
        r = 1 - i;
        if (!p) {
            std::cout << "iteracao: " << i << " | resultado: " << r << '\n';
        }
    }
}