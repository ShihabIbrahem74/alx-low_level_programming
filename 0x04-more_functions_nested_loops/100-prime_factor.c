#include <stdio.h>
#include <math.h>
#include <stdint.h>
int prime_check(int64_t n);

/**
 * main - Entry point
 *
 * Description: for alx task 0
 *
 * Return: Always 0.
 */
int main(void)
{
long int i;
long int final;
long int num = 612852475143;

while (num % 2 == 0)
num = num / 2;
for (i = 3; i <= sqrt(num); i += 2)
{
while (num % i == 0)
{
num = num / i;
final = i;
}
}
if (num > 2)
final = num;
printf("%ld\n", final);
}
