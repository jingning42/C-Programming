/* Bisection method
   http://en.wikipedia.org/wiki/Bisection_method
   x = (a+b)/2 */
 
#include <stdio.h>
#include <math.h>
int main()
{
  double a=-10,b=10,x,y;
  x = (a+b)/2;
  y = 2*x*x*x-4*x*x+3*x-6;
  while (fabs(y)>1e-6) {
    y>0 ? (b=x) : (a=x) ;
    x = (a+b)/2;
    y = 2*x*x*x-4*x*x+3*x-6;
  }
  printf("x=%lf\n",x);
  return 0;
}
