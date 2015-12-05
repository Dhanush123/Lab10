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
     cout << "Description: This program calculates from what distance away can a boat see a lighthouse of a text file provided height value." << endl;
     cout << endl;
     
     //get user input
     double lighthouseHeight;
     ifstream fin;
     fin.open("lighthouse.txt");
     if(!fin.good()) throw "I/O error";
     fin >> lighthouseHeight;
     fin.ignore(1000, 10);
     
     fin.close();

     //calculate distance
     double lighthouseToBoatDistance = sqrt(0.8 * lighthouseHeight);
 
     //show the distance between the lighthouse and the boat
     cout << "A " << lighthouseHeight << " foot tall lighthouse can be see from ";
     cout.setf(ios::fixed);
     cout << setprecision(0);
     cout << lighthouseToBoatDistance << " miles away" << endl;
 }

