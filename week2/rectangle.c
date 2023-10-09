#include <stdio.h>

int main() {
    float a;
    float b;
    float area;

    

    printf("please enter the length of longer sides: ");
    scanf("%f", &a);

    printf ("please enter the length of shorter sides: ");
    scanf("%f", &b);
    area = a * b;
    printf("the area of the rectangle is %.3f\n", area);
    
    return 0;
    
}