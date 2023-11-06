//
// Created by Elliot Rabaroust-Lefèvre on 23/10/2023.
//



#ifndef CONTACT_MAIN_H
#define CONTACT_MAIN_H

#include <iostream>

int PRINT(std::string filename);
int ADD (std::string filename);
int DELETE(std::string filename);
int CHANGE(std::string filename);

int write_in_file(std::string content[50][3], std::string filename);



std::string* read_file(std::string filename);
std::string* decode(std::string s);



#endif //CONTACT_MAIN_H


