#include "main.h"


/**
* rev_string - Reverses a string
* @s: The string to be modified
*
* Return: void
*/

void puts2(char *str)

{

int i;

int j = 0;


while (str[j] != '\0')

{

j++;

}



for (i = 0; i < j; i += 2)

{

_putchar(str[i]);

}



_putchar('\n');

}


