#include <iostream>
#include <vector>

double rekursiv_bell(unsigned n) {
    if (n == 0) {
        return 1;
    }
    else {
        double erg = 0;
        double binom = 1;
        for (int k = 0;k < n;k++) {
            erg += binom * rekursiv_bell(k);
            binom *= (n - 1 - k);
            binom /= (k + 1);
        }
        return erg;
    }
}

double iterativ_bell(unsigned n) {
    std::vector<double> b(n + 1);
    b[0] = 1;
    double binom_k;
    for (int i = 1;i <= n;i++) {
        double erg = 0;
        binom_k = 1;
        for (int k = 0;k < i;k++) {
            erg += binom_k * b[k];
            binom_k *= (i - 1 - k);
            binom_k /= (k + 1);
        }
        b[i] = erg;
    }
    return b[n];
}

int main() {
    std::cout << "Welche Bell Zahl?" << std::endl;
    unsigned n;
    std::cin >> n;
    std::cout << "Rekursiv ist das " << rekursiv_bell(n) << std::endl;
    std::cout << "Iterativ ist das " << iterativ_bell(n) << std::endl;
}