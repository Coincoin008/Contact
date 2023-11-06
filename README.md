# Contact
That's a little contact app that let you store your contacts in a .txt file. It stores its name, its age and its phone number.


## Different actions

* PRINT : it prints out your contacts.
* ADD : it allows you to add a contact.
* DELETE : it allows you to delete a contact
* CHANGE : it allow you to change an information of a contact. You mispelled a name ? You use this command.
* STOP : it stops the program


## The different files and what they do

* actions.cpp : it's the file where are declared the actions' functions (PRINT, ADD, ...). It kinda is the main part of the program
* decode.cpp : in the txt file ( i didn't uploaded it ), the data are stored this way : name>>>age>>>num. The decode.cpp file stores the decode() function that takes such a line and returns an array
* main.cpp : the heart of the program, with the main() function
* read_file.cpp : the file where is stored the function that reads the txt file and turns it into array, in whom there are all the lines
* write_in_file.cpp : the file with the write_in_file() function. This function writes an array into the file.
 {'name', 'age', 'number'} -> name>>>age>>>number
* main.h and read_file.h : header files
