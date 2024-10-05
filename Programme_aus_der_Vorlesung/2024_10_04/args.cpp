#include <iostream>

// char** ist etwa vector<string>
int main(int count, char** args) {
   for (int i = 0; i < count; ++i) {
      std::string arg = args[i];
      std::cout << arg << std::endl;
      if (arg == "test") {
         std::cout << "Gefunden" << std::endl;
      }
   }
}
