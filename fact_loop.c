#include <stdio.h>

int fact_for(int x) {
  int out = 1;
  for (int i = 1; i <= x; i++) {
    out = out * i;
  }
  return out;
}

int fact_while(int x) {
  int out = 1;
  int i = 1;
  while (i <= x) {
    out = out * i;
    i++;
  }
  return out;
}
int
main(void)
{
	int n = 5;

	printf("Factorial of %d is %d = %d.\n",
	    n, fact_for(n), fact_while(n));
	return (0);
}
