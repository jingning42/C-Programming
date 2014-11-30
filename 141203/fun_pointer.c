#include <stdio.h>
#include <math.h>

#define N 10000

double def_integral(double (*func)(double), double a, double b);

int main()
{
    int i;
    double y[3];
    y[0] = def_integral(sin, 0, 1);
    y[1] = def_integral(cos, -1, 1);
    y[2] = def_integral(exp, 0, 2);

    for (i=0; i<3; i++)
        printf("y[%d] = %lf\n", i+1, y[i]);
    return 0;
}

double def_integral(double (*func)(double), double a, double b)
{
    double sum = 0;
    double del, x = a;

    del = (b-a)/N;
    while (x < b) {
        x += del;
        sum += func(x)*del;
    }            
    return sum;
}


