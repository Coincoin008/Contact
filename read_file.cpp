#include "main.h"
#include <iostream>
#include <fstream>
#include "read_file.h"


using namespace std;



string* read_file(string filename) {

    ifstream file(filename); // le stream pour lire le fichier 'contacts.txt'

    static string lines[50] = {}; // on créer la liste qui contiendra toutes les lignes du fichier
    for ( int a = 0; a<50; a++) {
        lines[a] = "";
    }
    int i = 0;
    string line;


    while (getline(file, line)) {
        lines[i] = line;
        //cout << line + " - ";
        i++;
    }

    return lines;

}