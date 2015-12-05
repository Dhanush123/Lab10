// Lab 10
// Programmer: Dhanush Patel
// Editor(s) used: Eclipse
// Compiler(s) used: Eclipse

#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    cout << "Programmer: Dhanush Patel" << endl;
    cout << "Description: This program converts text file given Celsius temperature(s) to Fahrenheit one(s)." << endl;
    cout << endl;

    ifstream fin;
    fin.open("temps.txt");
    if(!fin.good()) throw "I/O error";

    while(fin.good()){
    double celsiusTemperature;
    fin >> celsiusTemperature;
    fin.ignore(1000, 10);
    if(celsiusTemperature == -999)
    {
    	break;
    }

    double fahrenheitTemperature = ((9.0/5) * celsiusTemperature) + 32;

    cout << celsiusTemperature << " Celsius equals ";
    cout.setf( ios:: fixed | ios:: showpoint);
    cout << setprecision(1);
    cout << fahrenheitTemperature << " Fahrenheit" << endl;
    cout.unsetf( ios:: fixed | ios:: showpoint);
    cout << setprecision(6);
    }
    fin.close();
}

