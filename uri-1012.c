#include<stdio.h>
int main ()
{
    double A,B,C,tri,cir,trape,squ,rect,pi;
    scanf("%lf %lf %lf",&A,&B,&C);
    pi=3.14159;
    tri=.5*A*C;
    cir=pi*C*C;
    trape= ((A+B)/2)*C;
    squ = B*B;
    rect = A*B;
    printf("TRIANGULO: %.3lf\n",tri);
    printf("CIRCULO: %.3lf\n",cir);
    printf("TRAPEZIO: %.3lf\n",trape);
    printf("QUADRADO: %.3lf\n",squ);
    printf("RETANGULO: %.3lf\n",rect);
    return 0;
}
