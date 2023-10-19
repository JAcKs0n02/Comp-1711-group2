#include <stdio.h>


float sphereVolume (float radius){
    float volume;
    volume = 3.14 * radius * radius * radius * 4/3;
    return volume;
}

int main () {
    float radius, volume;

    printf("Enter a radius: ");
    scanf("%f", &radius);

    volume = sphereVolume(radius);

    printf("The volume of sphere is %.3f\n", volume);
}