#include <stdio.h>

int main() {

    int mark = -10;

    while (mark < 0 || mark > 100){
        printf ("Enter the mark: \n");
        scanf ("%d", &mark);
    }

    

    if (mark == 0)
    {
        printf ("The mark of %d is zero\n", mark);
    }
    else if (mark < 40)
    {
        printf ("The mark of %d is a fail\n", mark);
    }
    else if (mark >= 60 && mark <70){
        printf ("The mark of %d is 2:1\n", mark);
    }
    else if (mark >= 70 && mark <= 100)
    {
        printf ("The mark of %d is a first\n", mark);
    }
    else {
        printf("The mark of %d is a pass\n", mark);
    }
    return 0;
}