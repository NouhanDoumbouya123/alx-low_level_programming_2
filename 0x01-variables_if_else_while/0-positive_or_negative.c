#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main: void
 * function: say whether a number is positive, negative or 0
 * return: 0
 * /

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive ", n);
	else if (n == 0)
		printf("%d is zero ", n);
	else
		printf("%d is negative ", n);
	return (0);
}
