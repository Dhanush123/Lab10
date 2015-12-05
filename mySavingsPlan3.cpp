// Lab 10
// Programmer: Dhanush Patel
// Editor(s) used: Eclipse
// Compiler(s) used: Eclipse

#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

#include <cmath>

 int main()
 {
     cout << "Programmer: Dhanush Patel" << endl;
     cout << "Description: This program calculates a personal savings plan and projects future growth using text file provided values." << endl;
     cout << endl;
     
     ifstream fin;
     fin.open("savings.txt");
     if(!fin.good()) throw "I/O error";

     // get user values
     int years;
     fin >> years;
     fin.ignore(1000, 10);
     
     double interestRate;
     fin >> interestRate;
     fin.ignore(1000, 10);
     
     int D;
     fin >> D;
     fin.ignore(1000, 10);
     
     fin.close();

     // output (calculated) values
     double p = interestRate / 1200; // 9.5% annual interest rate
     double T = years * 12;
     double S = D * ((pow(1 + p, T) - 1) / p);
     
     // echoing input values, unformatted
     cout << "In " << years << " years at " << interestRate << "%, $";
     cout << D << " deposited per month will grow to $";
     
     // formatting output (see 4.2)
     cout.setf(ios::fixed|ios::showpoint);
     cout << setprecision(2);
     cout << S << "." << endl;
 }

