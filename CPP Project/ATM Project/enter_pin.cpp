#include <iostream>

int main()
{
  int pin = 0;
  int tries = 0;

  std::cout << "JU-JUTSU BANK\n";

  std::cout << "Enter your PIN: ";
  std::cin >> pin;

  tries++;

  while (pin != 2077 && tries < 3)
  {
    std::cout << "Enter your PIN: ";
    std::cin >> pin;
    tries++;
    if (pin != 2077 && tries == 3)
    {
      std::cout << "ACCOUNT LOCKED!\n";
      std::cout << "Please contact the bank for help.";
    }
  }

  if (pin == 2077)
  {
    std::cout << "PIN accepted!\n";
    std::cout << "You now have access.\n";
  }
}