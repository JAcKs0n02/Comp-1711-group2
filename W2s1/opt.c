#include <stdio.h>

int main() {
    int a = -1;

    
    while (a < 0){
        printf("enter your option: ");
        scanf("%d", &a);
    }
    printf("Invalid input\n");

    switch (a){
        case 0:
            printf("Option 0 is selected\n");
            break;
        case 1:
            printf("Option 1 is selected\n");
            break;
        case 2:
            printf("Option 2 is selected\n");
            break;
        case 3:
            printf("Option 3 is selected\n");
            break;
        case 4:
            printf("Option 4 is selected\n");
            break;
        case 5:
            printf("Option 5 is selected\n");
            break;
        default:
            printf("No option is selected\n");
            break;
    }
    return 0;
}