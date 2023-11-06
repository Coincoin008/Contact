#include <iostream>
#include <fstream>
#include "main.h"

using namespace std;

int write_in_file(string content[50][3], string filename) {
    ofstream wfile(filename);

    for (int i = 0; i < 50; i++) {
        if ( content[i][0] != "" ) {
            wfile << content[i][0] + ">>>";
            wfile << content[i][1] + ">>>";
            wfile << content[i][2] << endl;
        }
    }

    return 0;
}