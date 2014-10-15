#include<stdio.h>
#include<math.h>
main()
{
  double a, b, c, d;
  a = 3.31*pow(10, 18); 
  b = 2.10*pow(10, -7); 
  c = 7.16*pow(10, 5);
  d = 2.01*pow(10, 3);
  /*
  a = 3.31e18;
  b = 2.1e-7;
  c = 7.16e5;
  d = 2.01e3;
  */
  double x = (a+b)/(c+d);
  printf("%lf\n%.11lf\n%lf\n%lf\n",a,b,c,d);
  /*
    注意默认显示8位，因此如果b没用%.11f显示，那么出来的是0.000000
    我应该花店时间弄懂输入和输出的问题
   */
  printf("x = %f\n",x);
}
