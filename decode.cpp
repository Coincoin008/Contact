#include <iostream>
#include "main.h"

using namespace std;

string* decode(string s) {
    static string line[3];
    if (s != "") {
        size_t pos = 0;

        string token;
        string del = ">>>";
        int x = 0;
        while ((pos = s.find(del)) != string::npos) {
            token = s.substr(0, pos);
            line[x] = token;
            s.erase(0,s.find(del) + del.length());
            x++;
        }
        line[2] = s;


    } else {
        line[0] = "";
        line[1] = "";
        line[2] = "";
    }

    return line;
}
