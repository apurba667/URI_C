#include<stdio.h>
int main ()
{
    int x,n;
    float m;
    double salary;
    scanf("%d %d %f",&x,&n,&m);
    salary =n*m;
    printf("NUMBER = %d\n",x);
    printf("SALARY = U$ %.2lf\n",salary);
    return 0;
}
