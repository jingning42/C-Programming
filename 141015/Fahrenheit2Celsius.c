/*********************************
 * 教材85页习题9
 * 编程实现华氏温度到摄氏温度的转换
 *********************************/
#include <stdio.h>
main()
{
  float f,c;
  printf("Please input the fahrenheit degree:");
  scanf("%f",&f);
  if (f>-460.3)
    {
      c = 5*(f-32)/9;
      printf("The Celsius degree is: %f\n", c);
    }
  else
    printf("Your input have no meaning!\n");
}
