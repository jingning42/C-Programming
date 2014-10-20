#include<stdio.h>
main()
{
  int salary;
  printf("Please input your salary number: ");
  scanf("%d",&salary);
  if (salary <= 3000)
    printf("No tax require!\n");
  else
    {
      int num = (salary-3000-1)/500;
      float tax;
      switch(num)
        {
        case 0:tax=(salary-3000)*0.05;break;
        case 1:
        case 2:tax=(salary-3000)*0.10;break;
        case 3:
        case 4:
        case 5:tax=(salary-3000)*0.15;break;
        case 6:
        case 7:
        case 8:
        case 9:tax=(salary-3000)*0.20;break;
        default :tax=(salary-3000)*0.25;
        }
      printf("Personal income tax is %.1f yuan!\n",tax);
    }
}
