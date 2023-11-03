#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// écrire une fonction nb_lignes qui compte le nombre lignes
// d'un fichier dont le nom est passé en paramètre. Il doit retourner
// une valeur négative en cas d'impossibilité d'ouvrir le fichier

int main() {
   cout << "Entrez le nom du fichier : " << flush;
   string filename; cin >> filename;
   auto n = nb_lignes(filename);
   if(n >= 0)
      cout << "Le fichier contient " << n << " lignes" << endl;
   else
      cout << "Le fichier est illisible";
}