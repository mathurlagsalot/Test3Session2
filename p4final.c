float evaluate_polynomial(int n, float f[n], float x)
{
  float result = f[n-1];
  for(i = n - 1 ; i > 0 ; i--)
    {
      result = result * x;
      result = result + f[i - 1];
    }
  result;
}