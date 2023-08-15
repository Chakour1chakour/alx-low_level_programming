#include "main.h"

/**
 * main - printx10 alphabet
 * Return: 0
 */

int main(void)
{
  char letter;
  int count;

  for (count = 1; count<=10; count++)
  {
    for(letter = 'a'; letter <= 'z'; letter++)
    {
      _putchar(letter);
    }
  _putchar('\n');

  }

  return (0);
}
