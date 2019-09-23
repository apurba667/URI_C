#include<stdio.h>
int main ()
{
    float A,B,C,MEDIA;
    int x,y,z;
    scanf("%f%f%f",&A,&B,&C);
    x=2;
    y=3;
    z=5;
    MEDIA= (A*x+B*y+C*z)/(x+y+z);
    printf("MEDIA = %.1f",MEDIA);
    return 0;
}
