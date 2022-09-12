#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */

/**
 * *main -  Entry point
 * *
 * * Return: Alwaays 0 (Success)
 * */
int main(void)
{
	  int n;

	  srand(time(0));

	  n = rand() - RAND_MAX / 2;
	  /* check for negative numbers */
		  if (n < 0)
		  {
			    printf("%d is negative\n", n);
			  }
	  else if (n > 0)
		  {
			    printf("%d is positive\n", n);
			  }
	  else
		  {
			    printf("%d is zero\n", n);
			  }
	  return (0);
}
