#include <iostream>
using namespace std;
int main() {
     cout << "What do you need to convert to?" << endl << "Farenheit to Celcius (1) Or Celcius to Farenheit(2)?" << endl << "Type the option you need: ";
     int option;
     cin >> option;

     if (option = 1) {
          cout << "Type the temperature in Farenheit: ";
     } else if (option = 2) {
          cout << "Type the temperature in Celcius";               
     } else {
          cout << "Please type in 1 or 2";}

     int temperatureInFarenheit;
     cin >> temperatureInFarenheit;
    return 0;
    }