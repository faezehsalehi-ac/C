#include <stdio.h>
int main()
{
  int n;
  int b_n;
  int odd;
  int even;
  int c;
  int d;
  c = 1;
  even = 0;
  odd = 0;
  printf("Enter n:");
  scanf("%d", &n);
  b_n = n;
  while(b_n != 0)
  {
    d = b_n - ((b_n / 100) * 100);
    even = (even) + (d - (d / 10) * 10)*c;
    odd = (odd) + (d / 10)*c;
    c = c * 10;
    b_n = b_n / 100;
  }
  printf("Number: %d\nOdd: %d\nEven: %d\n", n, odd, even);
  return 0;
}
