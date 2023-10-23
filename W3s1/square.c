#include <stdio.h>

int main() {
    char *filename = "squares.dat";
    FILE *file = fopen(filename, "w");

    if (file == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    int lines;
    int squ;
    int number;

    printf("How many numbers do you want to calculate the square: ");
    scanf("%d", &lines);


    for (int i = 1; i < lines; i++)
    {
        scanf("%d", &number);
        fprintf(file, "%d\n", number);
        squ = number * number;
    }
    fclose(file);
    return 0;
}