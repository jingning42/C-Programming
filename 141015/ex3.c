#include<stdio.h>

/*输入球的半径r，输出球的体积*/
main()
{
  float r,v;
  double PI = 3.14159;
  printf("Please input the radius of a ball:");
  scanf("%f",&r);
  if (r>0)
    {
      v = 4*PI/3*r*r*r;
      printf("The volume of this ball is: %f\n",v); 
    }
  else
    printf("Your input is out of range!\nPlease input a right number.\n");
}
