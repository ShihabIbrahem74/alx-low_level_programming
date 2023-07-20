#include <stdio.h>
#include <math.h>
int prime_check(long long int n);

/**
 * main - Entry point
 *
 * Description: for alx task 0
 *
 * Return: Always 0.
 */
int main(void)
{
long long int i;
long long int final;
long long int num = 612852475143;

for (i = 2; i < num; i++)
{
if (prime_check(i))
{
if (num % i == 0)
{
final = i;
num = num / i;
}
}
}
printf("%lld\n", final);
}

/**
 * prime_check - check every prime number
 *
 * Description: for alx task 0
 *
 * @n: 'n' is the prime number to be checked
 *
 * Return: Always ret.
 */

int prime_check(long long int n)
{
int check;
int ret;

for (check = 2; check <= n; check++)
{
if (n % check == 0 && check != n)
{
ret = 0;
break;
}
if (check == n)
{
ret = 1;
}
}
return (ret);
}
