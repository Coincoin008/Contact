#include <iostream>
#include <fstream>
#include "main.h"

using namespace std;


int PRINT(string filename) {
    string* file;
    file = read_file(filename);


    string lines[50][3];
    int p;
    int q;

    for (p=0; p<50; p++) {
        for (q=0; q<3; q++) {
            lines[p][q] = "a>a>";
        }
    }
    int i;
    for (i=0; i<50; i++) {

        string s = file[i];
        //cout << file[i] << endl;

        string* line = {};

        line = decode(s);

        int z;
        for (z=0; z<3; z++) {
            lines[i][z] = line[z];
        }
    }

    int a;
    int f;
    bool empty = true;
    string values[3] = {"Nom : ", " Age : ", "Numéro : "};

        for (a = 0; a<50; a++){
            if (lines[a][0] !=  ""){
                empty = false;
                for (f=0; f<3; f++) {
                    cout << values[f] + lines[a][f] + " - ";
                }
                cout << endl;
            }
        }

        /*if ( empty ) {
            cout << "Vous n'avez pas de contacts ? Rajoutez-en !" << endl;
        }*/

    return 0;
}

int ADD(string filename) {

    ofstream file(filename, ios::app);

    string name;
    int age;
    string num;

    cout << "Le nom > ";
    cin >> name;

    cout  << "Son age > ";
    cin >> age;

    cout << "Son numéro > ";
    cin >> num;

    file << name + ">>>" + to_string(age)+ ">>>" + num << endl;


    return 0;
}

int DELETE(string filename) {

    ofstream wfile(filename, ios::app);
    string* file = read_file(filename);
    string lines[50][3];
    string content[50][3];

    for (int i = 0; i < 50; i++) {
        lines[i][0] = decode(file[i])[0];
        lines[i][1] = decode(file[i])[1];
        lines[i][2] = decode(file[i])[2];

    }
    string in_name;

    cout << "Entrer son nom > ";
    cin >> in_name;

    string name;
    bool isnamepassed = false;
    for (int z = 0; z<50; z++) {
        name = lines[z][0];
        if ( name != in_name || isnamepassed){
            for (int i = 0; i<3; i++) {
                if (!isnamepassed){
                    content[z][i] = lines[z][i];
                } else {
                    content[z-1][i] = lines[z][i];
                }

            }
        } else {
            isnamepassed = true;
        }
    }
    write_in_file(content, filename);

    return 0;

}

int CHANGE(string filename) {

    string* file = read_file(filename);

    string lines[50][3];
    string lines_to_write[50][3];


    for ( int u = 0; u < 50; u++) {
        for ( int d = 0; d < 3; d++) {
            lines[u][d] = decode(file[u])[d];
        }
    }

    string name;
    cout << "Quel est le nom du contact que vous souhaitez modifier ?" << endl << ">  ";
    cin >> name;
    int line_index;


    for ( int c = 0; c < 50; c++) {
        string c_name = decode(file[c])[0];
        if ( c_name == name) {
            line_index = c;
            break;
        }
    }

    string wtc; // what_to_change -> ce que l'utilisateur veut changer
    int wtc_index; // l'index de wtc
    string new_value; // la nouvelle valeur
    cout << "Que voulez vous changer ? le NOM, l'AGE, ou le NUM ?" << endl << ">  ";
    cin >> wtc;

    if ( wtc == "NOM") {
        wtc_index = 0;
    } else if (wtc == "AGE") {
        wtc_index = 1;
    } else if (wtc == "NUM") {
        wtc_index = 2;
    }

    cout << "Entrez la nouvelle valeur " << endl << ">  ";
    cin >> new_value;

    for (int e = 0; e < 50; e++) {
        if (e != line_index) {
            //cout << " e!=  li" << endl;
            for (int a = 0; a < 3; a++) {
                lines_to_write[e][a] = lines[e][a];
                //cout << lines[e][a] + " - ";
            }
        } else {
            for (int a = 0; a<3; a++) {
                if (a != wtc_index) {
                    lines_to_write[e][a] = lines[e][a];
                } else {
                    lines_to_write[e][a] = new_value;
                }
            }
        }
    }


    write_in_file(lines_to_write, filename);

    return 0;

}
