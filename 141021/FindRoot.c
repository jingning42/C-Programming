#include<stdio.h>
#include<math.h>
/* input a,b,c and find the root of ax^2+bx+c = 0 */
main()
{
  float a,b,c;
  printf("Please input a,b,c: ");
  scanf("%f%f%f",&a,&b,&c);
  double delta = b*b-4*a*c;
  if (delta >=0)
    {
      double x1 = (-b+sqrt(delta))/(2*a);
      double x2 = (-b-sqrt(delta))/(2*a);
      printf("x1=%lf,x2=%lf\n",x1,x2);
    }
  else
    printf("No real root exist!\n");
}
