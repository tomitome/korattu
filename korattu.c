#include<stdio.h>

int main (void){
    int a=0;
    int i;
    int b=0;
    for(i=1;i<100;i++){
        a = i;
        printf("%dのとき\n",a);
        while(1){
            if(a == 1){
                printf("%d\n",a);
                printf("「%d」はコラッツ予想を満たす\n",i);
                break;
            }else if(a%2 == 1){
                b=a;
                a = a*3+1;
                printf("%d->%d->",b,a);
            }else{
                b=a;
                a = a/2;
                printf("%d->%d->",b,a);
            }
        }
    }
    return 0;
}
