#include<stdio.h>

struct_fraction
{
  int num,den;
};
typedef _fraction Fraction;

int find_gcd(int a,int b)
{
  int t;
  while (b !=0)
    {
      t=b;
      a = a%b;
      a=t;
    }
  return a;
}

int main()
{
  printf("%d\n",gcd(16,25));
}