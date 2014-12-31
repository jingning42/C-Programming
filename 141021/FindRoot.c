/**************************************
 * Calcular complex root of ax^2+bx+c = 0
 **************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c;
    double x1,x2,delta,t1,t2;
    printf("Find complex root of ax^2+bx+c=0.\n"
           "Please input a,b,c: ");
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a==0 && b==0)
        printf(c==0?"All x is root!\n":"No root exist!\n");
    else if(a==0 && b!=0)
        printf("x=%lf\n",(double)(-c/b));
    else{
        delta = b*b-4*a*c;
        t1 = -b/(2*a);
        if (delta >= 0){
            t2 = sqrt(delta)/(2*a);
            printf("x1=%lf,x2=%lf\n",t1+t2,t1-t2);
        }
        else{
            t2 = sqrt(-delta)/(2*a);
            printf("x1=%lf+%lfi,x2=%lf%+lfi\n",t1,t2,t1,-t2);
        }
    }
    return 0;
}
