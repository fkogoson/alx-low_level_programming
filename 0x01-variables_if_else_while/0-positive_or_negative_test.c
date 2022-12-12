#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* more headers goes here */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	
	n = rand() - RAND_MAX / 2;
	/* your code goes here */
	printf("Random number: %d\n", n);

	return (0);
}
