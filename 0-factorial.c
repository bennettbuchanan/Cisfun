int factorial(int n)
{
  int sum = 1;
  /* Handle a case where n is negative. */
  if (n < 0)
  {
    return(-1);
  }
  /* Handle a case where return value is greater than INT_MAX */
  if (n > 12)
  {
    return(-1);
  }
  /* Multiply each preceding int and add to sum. */
  while (n != 0) {
    sum *= n;
    n--;
  }
  return (sum);
}
