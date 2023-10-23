#include <stdio.h>

int main()
{
    char *filename = "data1.txt";

    FILE *file = fopen(filename, "w"); // or "a", "w+", "a+"
    if (file == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    int number;
    int num_lines;
    float mean;
    float total = 0;
 
    
    printf("How many numbers to enter: ");
    scanf("%d", &num_lines);

    printf("Type %d numbers: \n", num_lines);
    
    
    for (int i = 0; i < num_lines; i++)
    {
        scanf("%d", &number);
        fprintf(file, "%d\n", number);
        total += number;
    }

    mean = total/num_lines;
    printf("the mean is %f", mean);


    fclose(file);
    return 0;
}