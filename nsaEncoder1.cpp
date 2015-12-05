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
	string input;
	cout << "Enter the name of an existing text file to be encoded: " << endl;
	getline(cin, input);

	fin.open(input.c_str());
	ofstream fout;
	fout.open("secret.txt");
	if(!fout.good()) throw "I/O error";
    while(fin.good()){
    string line;
    getline(fin, line);
	for (int i = 0; i < line.length(); i++){
		line[i]++;
	}
	fout << line << endl;
   }
    fout.close();
    fin.close();
}

