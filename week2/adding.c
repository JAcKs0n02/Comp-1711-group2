#include <stdio.h>

int main() {
    float a;
    float b = 3.142;
    int c;

    a = 2.879;
    c = a + b;
    
    printf("the sum of %.3f and %.3f is %.3f\n", a, b, c);
    return 0;
}