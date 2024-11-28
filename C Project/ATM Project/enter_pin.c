#include <stdio.h>

int main()
{
  int pin = 0;
  int tries = 0;

  printf("SAMURAI BANK:\n");
  printf("Enter your PIN: ");
  scanf("%d", &pin);

  tries++;

  while (pin != 2077 && tries < 3)
  {
    printf("Enter your PIN: ");
    scanf("%d", &pin);
    tries++;
    if (pin != 2077 && tries == 3)
    {
      printf("Your account is locked!\n");
      printf("Please contact a bank representative for assistance.");
    }
  }

  if (pin == 2077)
  {
    printf("PIN accepted!\n");
    printf("You now have access.\n");
  }
}