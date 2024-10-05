#include <iostream>
#include <string>

int main() {
   std::string zeile;
   while (std::getline(std::cin, zeile) and zeile != "Fertig ") {
      std::cout << "Eingabe war: |" << zeile << "|" << std::endl;
   }
   std::cout << "ENDE" << std::endl;
}
