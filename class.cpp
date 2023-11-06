#include <iostream>

using namespace std;

class User {
public:
    string name;
    int age;
    string number;
    int init_(int age_, string number_, string name_) {
        age = age_;
        number = number_;
        name = name_;

        return 0;
    }
};