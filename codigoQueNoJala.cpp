#include <iostream>

int main()
{
  int option;
  int temp;

  do
  {
    std::cout << "What do you need to convert to?\n"
              << "1. Farenheit to Celcius (1)\n"
              << "2. Celcius to Farenheit (2)\n"
              << "3. Exit (3)\n\n"
              << "Type the option you need: ";

    std::cin >> option;

    switch (option)
    {
      case 1:
        std::cout << "Farenheit to Celcius\n"
                  << "Enter the temperature in Farenheit: ";
        std::cin >> temp;
        std::cout << "The temperature in Celcius is: " << (temp - 32) * 5 / 9 << "\n\n";        
        break;

      case 2:
        std::cout << "Celcius to Farenheit\n"
                  << "Enter the temperature in Celcius: ";
        std::cin >> temp;
        std::cout << "The temperature in Farenheit is: " << (temp * 9 / 5) + 32 << "\n\n";
        break;

      case 3:
        std::exit(0);
        break;

      default:
        system("clear");
        std::cout << "No sea pendejo\n\n\n";
        break;
    }
  }
  while (option != 1 || option != 2);

  return 0;
}
