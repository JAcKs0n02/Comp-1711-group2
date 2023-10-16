#include <stdio.h>

int main() {
    float a;
    printf("enter a number: \n");
    scanf("%f", &a);

    if (a > 0){
        printf("the number is positive\n");
    }
    else if (a < 0)
    {
        printf("the number is negative\n");
    }
    else {
        printf("the number is zero");
    }

    return 0;
}