#include <iostream>

double convertFarenheitToCelcius(double farenheit)
{
  return (farenheit - 32) * 5 / 9;
}

double convertCelciusToFarenheit(double celcius)
{
  return (celcius * 9 / 5) + 32;
}

void clear()
{
  #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif
}

void pause()
{
  std::cout << "Press Enter to continue...";
  std::cin.ignore();
  std::cin.get();
}

int main()
{
  char option;
  int temperature;

  do
  {
    clear();

    std::cout << "What do you need to convert to?\n\n"
              << "1. Farenheit to Celcius\n"
              << "2. Celcius to Farenheit\n"
              << "3. Exit\n\n"
              << "Type the option you need: ";
    std::cin >> option;

    clear();

    switch (option)
    {
      case '1':
        std::cout << "Farenheit to Celcius\n\n"
                  << "Enter the temperature in Farenheit: ";
        std::cin >> temperature;
        std::cout << "The temperature in Celcius is: " << convertFarenheitToCelcius(temperature) << "\n\n";        
        break;

      case '2':
        std::cout << "Celcius to Farenheit\n\n"
                  << "Enter the temperature in Celcius: ";
        std::cin >> temperature;
        std::cout << "The temperature in Farenheit is: " << convertCelciusToFarenheit(temperature) << "\n\n";
        break;

      case '3':
        std::exit(0);
        break;

      default:
        std::cout << "No sea pendejo\n\n\n";
        break;
    }

    pause();
  }
  while (option != '3');

  return 0;
}
