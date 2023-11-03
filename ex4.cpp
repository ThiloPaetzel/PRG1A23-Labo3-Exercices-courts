#include <iostream>
#include <limits>

using namespace std;

// Ecrivez la fonction lire_multiple_de(n) qui demande
// à l'utilisateur d'entrer un multiple de n, et lui
// dit d'essayer encore jusqu'à ce qu'il le fasse.
//
// Exemple d'exécution :
//
//Entrez un entier multiple de 3: 23
//Essayez encore : douze ?
//Essayez encore : pardon, 12
//Essayez encore : 13
//Essayez encore : 12
//Merci, vous avez entre 12

int lire_multiple_de(int nombre){
    int userInput;
    bool isInputValid = false;
    do {
        cout << "Entrez un entier multiple de " << nombre << ": ";
        if (cin >> userInput){
            if (userInput % nombre == 0){
                isInputValid = true;
            } else {
                cout << "Essayez encore : ";
            }
        } else {
            cout << "Essayez encore : ";

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    } while (!isInputValid);
    return userInput;
}



int main() {

   int n = lire_multiple_de(3);
   cout << "Merci, vous avez entre " << n << endl;
}