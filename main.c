#include <stdio.h>
#include <math.h>
#define A -5.0 
#define B 5.0 
#define H 0.1 

/* Функция */
double F(double x)
{
 return x * exp(x) + 2 * sin(x) + sqrt(fabs(pow(x, 3) - pow(x, 2)));
}

int main( )
{
double x, y, sum;
sum = 0;
for(x = A; x <= B; x += H)
  {
    y = F(x); 
    printf("%10.4f %10.4f\n", x, y); 
    if (x > y)
      {
        sum += y;
      }
  }
printf("x > f(x) = %10.4f\n", sum);
return 0;
}