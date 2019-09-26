#include<stdio.h>
int main()
{
    int c1,c2,d1,d2;
    float p1,p2,total;
    scanf("%d %d %f",&c1,&d1,&p1);
    scanf("%d %d %f",&c2,&d2,&p2);
    total = (d1*p1)+(d2*p2);
    printf("VALOR A PAGAR: R$ %.2f\n",total);
    return 0;
}
