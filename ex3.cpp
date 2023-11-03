#include <iostream>

using namespace std;

// écrire la fonction plus_petite_lettre(str) qui retourne
// le plus petite caractère (au sens du code ASCII) de la chaine
// str. Si cette lettre apparait plusieurs fois c'est la
// dernière instance qui doit être retournée.

char& plus_petite_lettre(std::string &str) {
    char min_char = str[0];

    for (char &c : str) {
        if (c <= min_char) {
            min_char = c;
        }
    }

    for (int i = str.size() - 1; i >= 0; i--) {
        if (str[i] == min_char) {
            return str[i];
        }
    }
}


int main() {

   string s{"wisigoth"};
   plus_petite_lettre(s) = '*';
   cout << s << endl;
   // affiche wisi*oth

   s = "abraracourcix";
   plus_petite_lettre(s) = '*';
   cout << s << endl;
   // affiche abrar*courcix
}