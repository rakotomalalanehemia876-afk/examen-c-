#include <iostream>
#include <string>
using namespace std;

int main() {
    string verbe;
    cout << "veuiller saisir un verbe à l'infinitif : ";
    cin >> verbe;


    if(verbe.size() >= 2) {
        string fin = verbe.substr(verbe.size() - 2);

        if(fin == "er" && verbe != "aller") {
            cout << "Ce verbe appartient au 1er groupe." << endl;
        }
        else if(fin == "ir") {
            cout << "Ce verbe appartient au 2e groupe." << endl;
        }
        else {
            cout << "Ce verbe appartient au 3e groupe." << endl;
        }
    }
    else {
        cout << "Verbe trop court." << endl;
    }

    return 0;
}
