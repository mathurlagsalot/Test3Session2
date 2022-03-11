#include<stdio.h>

int input_degree()
{
  int n;
  printf("Enter Degree: ");
  scanf("%d", &n);

  return n+1;
}

float input_x() 
{
  float x;
  printf("Enter x: ");
  scanf("%f", &x);

  return x;
}

void input_coefficients(int n, float a[n])
{
  printf("Input the coefficients: ");

  for(int i = 0; i< n; i+=1){
    scanf("%f", &a[i]);
  }
    
}
float evaluate_polynomial(int n, float f[n], float x)
{
  float result = f[n-1];
  for(int i = n - 1 ; i > 0 ; i--)
    {
      result = result * x;
      result = result + f[i - 1];
    }
  return result;
}

void output(int n, float a[n], float x, float res)
{
  for(int i = 0; i < n-1; i+=1)
    printf("%f x^%d +", a[i], n-i-1);
  printf("%f, at x = %f", a[n-1], x);

  printf("= %f", res);
}

int main() 
{
  int n = input_degree();
  float x = input_x();

  float ar[n];
  input_coefficients(n, ar);

  output(n, ar, x, evaluate_polynomial(n, ar, x));
  return 0;
}