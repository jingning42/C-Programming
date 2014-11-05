/* Newton's method
   http://en.wikipedia.org/wiki/Newton%27s_method
   x[n+1] = x[n]-f(x[n])/f'(x[n]) */

#include <stdio.h>
#include <math.h>

int main()
{
  double x=1.5,y1,y2;
  y1 = 2*x*x*x-4*x*x+3*x-6;
  y2 = 6*x*x-8*x+3;
  while (fabs(y1)>1e-6){
    x = x - y1/y2;
    y1 = 2*x*x*x-4*x*x+3*x-6;
    y2 = 6*x*x-8*x+3;
  }
  printf("x = %f\n",x); 
  return 0;
}
