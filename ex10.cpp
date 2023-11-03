#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// écrire une fonction caractere_le_plus_frequent(string const& filename)
// qui retourne une structure ou une paire (voir chapitre 7) qui
// contient le caractère (hors espace ' ') le plus fréquent dans ce fichier,
// ainsi que le nombre de fois qu'il apparait. Ce nombre est négatif
// si le fichier est illisible.

std::pair<char, int> caractere_le_plus_frequent(string const& filename) {
   ifstream file(filename);
   if (!file.is_open()) {
      return {'\0', -1};
   }

   int max_count = 0;
   char max_char = '\0';
   int count[256] = {0};
   char file_char;
   while (file.get(file_char)) {
      if (file_char != ' ') {
         count[file_char]++;
         if (count[file_char] > max_count) {
            max_count = count[file_char];
            max_char = file_char;
         }
      }
   }

   return {max_char, max_count};
}

int main() {
   cout << "Entrez le nom du fichier : " << flush;
   string filename;
   cin >> filename;

   auto [c, n] = caractere_le_plus_frequent(filename);
   if (n >= 0)
      cout << "Le caractère " << c
           << " est le plus fréquent et apparait " << n
           << " fois dans le fichier " << filename << endl;
   else
      cout << "Le fichier est illisible";
}