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

int fact(int n)
{
  int res = 1;
  for(int i = 1; i <= n; i+=1)
    res *= i;
  return res;
}

int findncr(int n, int r)
{
  return fact(n) / (fact(n-r) * fact(r));
}

void output(int n, int r, int res)
{
  printf("Given %dC%d = %d", n, r, res);
}

int main()
{
  int n, r;
  input_nr(&n, &r);

  int ncr = findncr(n ,r);
  output(n, r, ncr);

  return 0;
}