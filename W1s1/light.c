#include <stdio.h>

int main() {
    float lspeed = +3.000E8;
    float distance;
    int days;

    printf("enter the days: ");
    scanf("%d", &days);

    distance = lspeed * days * 86400;
    printf("the distance that light travelled is %f\n", distance);

    return 0;

}