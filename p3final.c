//nCr = n!/r! * (n!- r!)//

#include<stdio.h>

int input_nr(int *n, int *r)
{
  printf("Enter the value for n: ");
  scanf("%d", n);
  printf("Enter the value for r: ");
  scanf("%d", r);
  return 0;
}

int findncr(int n, int r)
{
  int result = fact(n) / fact(n-r) * fact(r);
}