#include "main.h"
#include <stdio.h>
/**
* main - functiom that prints numbers from 1 to 100 for multiples of three
* Fizz is printed instead of the number for multiples of three
* Buzz is printed for multiples of five
* FizzBuzz for multiples of both three and five
* Return: Always 0.
*/
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 != 0)
{
printf(" Fizz");
}
else if (i % 5 == 0 && i % 3 != 0)
{
printf(" Buzz");
}
else if (i % 3 == 0 && i % 5 == 0)
{
printf(" FizzBuzz");
}
else if (i == 1)
{
printf("%d", i);
}
else
{
printf(" %d", i);
}
}
printf("\n");
return (0);
}
