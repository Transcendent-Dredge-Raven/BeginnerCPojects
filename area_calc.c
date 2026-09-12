#include <stdio.h>

int main(void) {
    int len = 0;
    int wid = 0;
    int total = 0;

    printf("What is the length of the rectangle?\n");
    scanf("%d", &len);

    printf("What is the width of the rectangle?\n");
    scanf("%d", &wid);

    total = len * wid;

    printf("The area of your rectangle is %d\n", total);
    return 0;
}