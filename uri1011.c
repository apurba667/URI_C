#include<stdio.h>
int main ()
{
    double R,pi,value;
    pi = 3.14159;
    scanf("%lf",&R);
    value = ((4/3.0)*pi*R*R*R);
    printf("VOLUME = %.3lf",value);

    return 0;
}
