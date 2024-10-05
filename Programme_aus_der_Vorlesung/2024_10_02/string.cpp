#include <iostream>
#include <string>

int main() {
   std::cout << "Wer bist du?" << std::endl;
   std::string name;
   std::cin >> name;
   std::cout << name.size() << std::endl;
   if (name == "Malte") {
      std::string hallo = "Hallo";
      std::string gruss = hallo + " " + name;
      gruss += "!";
      std::cout << gruss.size() << std::endl;
      std::cout << gruss << std::endl;
   } else {
      std::cout << name << " Dich kenne ich nicht!" << std::endl;
   }
   return 0;
}
