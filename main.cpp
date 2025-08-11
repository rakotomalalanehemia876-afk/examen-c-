#include <iostream>
#include <string>
using namespace std;

int main() {
    string chaine;
    cout << "Entrez une chaine en CamelCase : "<< endl;
    cin >> chaine;

    string resultat;
    resultat += chaine[0];

    for(int i = 1; i < chaine.size(); i++) {

        if(chaine[i] >= 'A' && chaine[i] <= 'Z') {
            resultat += " ";
        }
        resultat += chaine[i];
    }

    cout << "Phrase convertie : " << resultat << endl;
    return 0;
}
