/************************
 * 测试卷四　第四题　1
 * 算平均值,方差,均方差
 ************************/

#include <stdio.h>
#include <math.h>

#define N 10

int udf_vft(double *v, double *f, double *t, double x[])
{
    double sum1 = 0, sum2 = 0;
    int i;
    
    for (i=0; i<N; i++) {
        sum1 += x[i];
        sum2 += x[i]*x[i];
    }
    *v = sum1/N;
    *f = sum2/N - (*v)*(*v);
    *t = sqrt(*f);
    
    return 0;
}

int main()
{
    double x[N] = {3.62,2.93,3.16,3.73,2.86,3.40,2.86,3.07,3.29,3.24};
    double v, f, t;
    udf_vft(&v, &f, &t, x);
    printf("v = %0.2lf, f = %0.2lf, t = %0.2lf\n", v, f, t);
    return 0;
}
