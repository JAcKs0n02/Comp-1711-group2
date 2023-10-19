#include <stdio.h>

float circleArea (float radius){
    float area;
    area = 3.14 * radius * radius;
    return area;
}

int main () {
    float radius, area;

    printf("Enter a radius: ");
    scanf("%f", &radius);

    area = circleArea(radius);

    printf("The area of circle is %f\n", area);
}