#include <stdio.h>

int main() {
    float temp;
    printf("Enter the temp: ");
    scanf("%f", &temp);

    if (temp > -10 && temp < 40){
        printf("the temperature is valid\n");
    }
    else {
        printf("The temperature is invalid\n");
    
    }
    return 0;
}
