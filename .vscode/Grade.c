#include <stdio.h>

int main(void){
    int grade1 = 0;
    int grade2 = 0;
    int grade3 = 0;
    int finalgrade = 0;

    printf("What is the score for your first subject?\n");
    scanf("%d", &grade1);

    pritnf("What is the score for your second subject?\n");
    scanf("%d", &grade2);

    printf("What is the score for your third subject?\n");
    scanf("%d", &grade3);

    finalgrade = (grade1 + grade2 + grade3) / 3;

    if (grade1 >= 33 && grade2 >=33 && grade3 >= 33 && finalgrade >= 40){
        printf("You passed!\n");
    } else {
        printf("Sorry, you didn't pass.\n");
    }

    printf("Your final score was %d.\n", finalgrade);

    return 0;
}