#include <stdio.h>
void prinf(void) __attribute__((constructor));
/**
 * prinf - print before the main function
 *
 * Return: void.
 */
void prinf(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
