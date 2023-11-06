#include <iostream>
#include <fstream>
#include "main.h"




using namespace std;

int main() {

    string const FILENAME = "contacts.txt";
    string command;

    cout << endl;

    while (command!="STOP") {

        cout << "Que voulez-vous faire ?" << endl;
        cout << "   -ADD pour ajouter un contact" << endl;
        cout << "   -DELETE pour supprimer un contact" << endl;
        cout << "   -CHANGE pour modifier les infos d'un contact" << endl;
        cout << "   -PRINT pour afficher tous les contacts" << endl;
        cout << "   -STOP pour arrêter le programme" << endl;
        cout << "> ";

        cin >> command;

        string const filename = "contacts.txt";


        if (command=="ADD") {
            ADD(FILENAME);
        } else if (command=="DELETE") {
            DELETE(FILENAME);
        } else if (command=="CHANGE") {
            CHANGE(FILENAME);
        } else if (command=="PRINT") {
            PRINT(FILENAME);
        }

    };

    return 0;
}
