#include<stdio.h>

struct _fraction{
  float num, den;
};

typedef struct _fraction fraction;

fraction input_fraction(){
  fraction f;
  printf("enter the value of fraction to get smallest\n");
  scanf("%f %f", &f.num, &f.den);

  return f;
}

fraction smallest_fraction(fraction f1, fraction f2, fraction f3){
  float a, b, c;
  a = f1.num/f2.den;
  b = f2.num/f2.den;
  c = f3.num/f3.den;

  if(a<b && a<c)
    {
    return f1;
    }
  else if(b<c)
    {
    return f2;
    }
  else
  {
    return f3;
  }  
}

void output(fraction f1, fraction f2, fraction f3, fraction smallest){
  printf("smalest fraction among %.0f/%.0f, %.0f/%.0f and %.0f/%.0f is %.0f/%.0f\n", f1.num, f1.den, f2.num, f2.den, f3.num, f3.den, smallest.num, smallest.den);
}

int main(){
  fraction f1, f2, f3, smallest;
  f1 = input_fraction();
  f2 = input_fraction();
  f3 = input_fraction();
  smallest = smallest_fraction(f1,f2,f3);
  output(f1,f2,f3,smallest);
  return 0;
}