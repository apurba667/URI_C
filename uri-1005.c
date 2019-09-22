#include<stdio.h>
int main()
{
    double A,B,MEDIA,c,d;
    scanf("%lf %lf",&A,&B);
    c=3.5;
    d=7.5;
    MEDIA= (((A*c)+(B*d))/(c+d));
    printf("MEDIA = %.5lf\n",MEDIA);
    return 0;
}
