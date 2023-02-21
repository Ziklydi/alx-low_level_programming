#include <stdio.h>
/**
* main - Entry point
*
*Description: 'The program description'
*Return: Always 0 (success)
*/
int main(void)
{
long int a;
int b;
char c;
long long int ll;
float f;
printf("Size of a char: %lu byte(s)\n", sizeof(c));
printf("Size of an int: %lu byte(s)\n", sizeof(b));
printf("Size of a long int: %lu byte(s)\n", sizeof(a));
printf("Size of a long long int: %lu byte(s)\n", sizeof(ll));
printf("Size of a float: %lu byte(s)\n", sizeof(f));
return (0);
}
