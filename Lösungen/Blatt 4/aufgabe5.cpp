#include <iostream>
#include <vector>

int main() {
    std::cout << "Welche Teiler soll ich enumerieren?" << std::endl;
    unsigned n;
    std::cin >> n;
    std::vector<int> teiler(n);
    int k = 0;




    for (int i = 1;i <= n;i++)
    {


        if (n % i == 0) {
            teiler[k] = i;
            k++;
        }
    }
    std::cout << "Die Teiler sind: ";
    for (int i = 0;i <= n;i++) {
        if (teiler[i] != 0) {
            std::cout << teiler[i] << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}