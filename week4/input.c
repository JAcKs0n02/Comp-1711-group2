#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int nums [200];
    char line [100];
    int counter = 0;
    int num_over_1000;

    FILE *file = fopen("input.txt", "r");
    while (fgets (line, 100, file)){
        nums[counter] = atoi (line);
        printf("%d\n", nums[counter]);
        if (nums[counter] > 1000){

        }
        counter++;
        
    }
    fclose(file);
    return 0;
}