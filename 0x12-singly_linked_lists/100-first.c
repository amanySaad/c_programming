#include <stdio.h>

void run_before(void) __attribute__ ((constructor));

void run_before(void)
{
 printf("You're beat! and yet, you must allow,\n");
 printf("I bore my house upon my back!\n");
}

