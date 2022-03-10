#include <stdio.h>

void input(int *num1,int *den1,int *num2,int *den2)
{
  printf("Enter numerator and denominator of fraction 1\n");
  scanf("%d%d",num1,den1);
  printf("Enter numerator and denominator of fraction 2\n");
  scanf("%d%d",num2,den2);
}

void add(int num1,int den1,int num2,int den2,int *num3,int *den3)
{
  int gcd,lcm;
  for(int i=1;i<=den1 && i<=den2;i++)
    {
      if(den1%i==0 && den2%i==0)
        gcd=1;
    }
  lcm=((den1)*(den2))/gcd;
  *num3=(num1*lcm)/den1+(num2*lcm)/den2;
  *den3=((den1)*(den2))/gcd;
}

void output(int num1,int den1,int num2,int den2,int num3,int den3)
{
  printf("%d/%d + %d/%d = %d/%d",num1,den1,num2,den2,num3,den3);
}

int main()
{
  int num1,den1,num2,den2,num3,den3;
  input(&num1,&den1,&num2,&den2);
  add(num1,den1,num2,den2,&num3,&den3);
  output(num1,den1,num2,den2,num3,den3);
  return 0;
  }
