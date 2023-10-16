#include <stdio.h>

int main() {
    int num;

    printf("enter a number: ");
    scanf("%d", &num);

    if (num %5 ==0 ){
        printf("the number is divisible by 5\n");
    }
    else if (num %4 ==0){
        printf("the number is divisible by 4\n");
    }
    else {
        printf("the number is not divisible by 4 and 5\n");
    }

    return 0;
}