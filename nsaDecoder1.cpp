// Lab 10
// Programmer: Dhanush Patel
// Editor(s) used: Eclipse
// Compiler(s) used: Eclipse

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "Programmer: Dhanush Patel" << endl;
	cout << "Description: This program encodes a string based off of what the user inputs." << endl;
    cout << endl;

    ifstream fin;
	fin.open("secret.txt");
	if(!fin.good()) throw "I/O error";
    while(fin.good()){
    string line;
    getline(fin, line);
	for (int i = 0; i < line.length(); i++){
		line[i]--;
	}
	cout << line << endl;
   }
    fin.close();
}

