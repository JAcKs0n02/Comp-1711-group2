#include <stdio.h>

int main() {
    int a, b, c = 11, d;
    

    for (a = 1; a < 11; a++){
        printf("a is equal to %d\n",a);

    }

    for (b=0; b < 51; b+=2){
        printf("b is equal to %d\n",b);
    }

    while (c < 1000){
        printf("c is equal to %d\n",c);
        c+=11;
    }

    for (d = 100; d > 0; d-=5){
        printf("d is equal to %d\n",d);
    }

    int A, G;
    A = 37;
    G = 0;

    while(G != A){
        printf("enter your guess: ");
        scanf("%d", &G);
    }
    printf("well done :) \n");


    int m = 1, n = 1, product;
    for (m * n;){
        while (m < 13){
            m++;
        }
        while (n < 13){
            n++;
        }
        printf("%d",m * n);
    }
    return 0;
    }


