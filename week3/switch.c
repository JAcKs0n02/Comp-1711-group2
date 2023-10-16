#include <stdio.h>

int main() {
    int a = -2;

    while (a < 0){
        printf("enter a number: ");
        scanf("%d", &a);
    }
    

    switch (a)
    {
        case 0:     
            printf ("Option 0 has been selected\n");
            break;

        case 1:     
            printf ("Option 1 has been selected\n");
            break;

        case 2:     
            printf("Option 2 has been selected\n");
            break;

        case 3:
            printf("option 3 has been selected\n");

        default:    
            printf ("A different option has been selected\n");
    }
}