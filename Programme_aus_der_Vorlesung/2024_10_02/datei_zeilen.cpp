#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cassert>

int main() {
   std::ifstream datei_stream("punkte.txt");
   std::string zeile;
   int zeilennummer = 1;
   while (std::getline(datei_stream, zeile)) {
      //std::cout << "Eingabe war: |" << zeile << "|" << std::endl;
      unsigned int a = 0;
      unsigned int b = 0;
      std::stringstream zeilen_stream(zeile);
      zeilen_stream >> a >> b;
      //assert(zeilen_stream);
      if (not zeilen_stream) {
         std::cout << "FEHLER in Zeile " << zeilennummer << std::endl;
         break;
      }
      std::cout << "Zahlen: " << a << " und " << b << std::endl;
      ++zeilennummer;
   }
   std::cout << "ENDE" << std::endl;
}

