#include <stdio.h>

int main() {
    int a;
    int b;
    int sum;

    printf("enter the first number: ");
    scanf("%d", &a);

    printf("enter the second number: ");
    scanf("%d", &b);

    sum = a + b;
    printf("the sum is %d\n", sum);
}