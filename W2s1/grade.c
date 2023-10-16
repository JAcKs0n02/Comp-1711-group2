#include <stdio.h>

int main() {
    int mark = -120;

    while (mark < 0 || mark > 100){
        printf("enter your mark: \n");
        scanf("%d", &mark);
    }
    
    if (mark >= 70){
        printf("you got a distinction\n");
    }
    else if (mark >= 50 && mark < 70){
        printf("you got a pass\n");
    }
    else {
        printf("you got a failed\n");
    
    }
    return 0;
}