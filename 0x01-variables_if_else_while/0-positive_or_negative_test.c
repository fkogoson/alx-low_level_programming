#include <stdio.h>
#include <time.h>

/* more headers goes here */
#include <stdlib.h>
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n - rand() - RAND_MAX / 2;
	/* your code goes here */
	printf("Random number: %d\n", n);

	return (0);
}
