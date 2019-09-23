#include<stdio.h>
int main ()
{
    char name[100];
    float x;
    double n,total;
    gets(name);
    scanf("%f %lf",&x,&n);
    total =x+(n*15)/100;
    printf("TOTAL = R$ %.2lf\n",total);
    return 0;
}
