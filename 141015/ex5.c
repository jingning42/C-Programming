#include<stdio.h>
/*输入5个数，计算一个分式的值*/
main()
{
  float a,b,c,d,e;
  printf("Input a,b,c,d,e,\n\
We will output the value of (a*b)/(c+d/e),\n\
so make sure the demoninator is not 0,\n\
Please input a,b,c,d,e in order:");
  scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
  // test printf("a=%f b=%f c=%f d=%f e=%f\n",a,b,c,d,e);
  if (e != 0 && c+d/e != 0 )
    {
      double y = (a*b)/(c+d/e);
      printf("y=%f\n",y);
    }
  else
    printf("Input Error!Please make sure the demoninator is not 0\n");
}
