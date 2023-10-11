#include <stdio.h>

int main() {
    int r;
    int area;

    printf("Give a radius of the circle? ");
    scanf("%d", &r);

    area = 3.14*r*r;

    printf("the area of the circle is %d\n", area);
    return 0;


}