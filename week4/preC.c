#include <stdio.h>

int main() {
    int number[10];
    int i = 0;
    int total = 0;
    float mean;

    for (i = 0; i < 10; i++){
        printf("enter a number: ");
        scanf("%d", &number[i]);
        total += number[i];
    }

    mean = total/10;

    for (i = 10; i < 10; i++){
        printf("%d\n", number[i]);

    }

    printf("the average is %.3f\n", mean);
}