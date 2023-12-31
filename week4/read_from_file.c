#include <stdio.h>
#include <stdlib.h>

int main() {
    char* filename = "data1.txt";
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    //number of characters which will be read per line
    int buffer_size = 100;
    //a string which will hold each line as it is read in
    char line_buffer[buffer_size];

    //while there is still stuff in the file
    while (fgets(line_buffer, buffer_size, file) != NULL) {
        printf("%d\n", atoi(line_buffer));
    }

    fclose(file);
    return 0;
}