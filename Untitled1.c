#include<stdio.h>
int main(){
    int c,a,l;
    scanf("%d",&c);
    scanf("%d",&a);
    int N500,N100,N50,N20,N10,N5,N2,N1;
    N500=N100=N50=N20=N10=N5=N2=N1=0;
    l = a-c;
    while(l>0){
    if(l >= 500){
        N500 = l/500;
        l = l-(N500*500);

    } else if(l >=100){
        N100 = l/100;
        l = l-(N100*100);
    } else if( l >= 50 ){
        N50 =  l/50;
        l = l-(N50*50);
    } else if(l >= 20){
        N20 = l/20;
        l = l-(N20*20);
    } else if( l >= 10){
        N10 = l/10;
        l = l-(N10*10);
    }else if( l >= 5){
        N5 = l/5;
        l = l-(N5*5);
    }else if( l >= 2){
        N2 = l/2;
        l = l-(N2*2);
    }else if( l >= 1){
        N1 = l;
    }
    }
    printf("Notes of 500 %d\n",N500);
     printf("Notes of 100 %d\n",N100);
     printf("Notes of 50 %d\n",N50);
     printf("Notes of 20 %d\n",N20);
     printf("Notes of 10 %d\n",N10);
     printf("Notes of 5 %d\n",N5);
    printf("Notes of 2 %d\n",N2);
    printf("Notes of 1 %d\n",N1);

}
