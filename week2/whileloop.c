#include <stdio.h>

int main() {
    int a = 100;

    while (a < 30)
    {
        printf ("a is equal to %d\n", a);
        a+=4;
    }
    printf ("I've finished the loop and a is equal to %d\n", a);

    return (0);
}