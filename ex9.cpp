#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// écrire une fonction nb_char_in_file(filename, c) qui compte le nombre
// de fois que la caractère c apparait dans le fichier. Il doit retourner
// une valeur négative en cas d'impossibilité d'ouvrir le fichier

int nb_char_in_file(string filename, char c) {
   ifstream file(filename);
   if (!file.is_open()) {
      return -1;
   }

   int n = 0;
   char file_char;
   while (file.get(file_char)) {
      if (file_char == c) {
         n++;
      }
   }

   return n;
}

int main() {
   cout << "Entrez le nom du fichier : " << flush;
   string filename; cin >> filename;
   cout << "Entrez le caractère : " << flush;
   char c; cin >> c;

   auto n = nb_char_in_file(filename,c);
   if(n >= 0)
      cout << "Le fichier contient " << n << " fois le caractère " << c << endl;
   else
      cout << "Le fichier est illisible";
}