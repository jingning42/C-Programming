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
