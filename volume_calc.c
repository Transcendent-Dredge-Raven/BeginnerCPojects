#include <stdio.h>

int main(void) {
    int radius = 0;
    int height = 0;
    int vol = 0;

    printf("What is the radius of the cylinder?\n");
    scanf("%d", &radius);

    printf("What is the height of the cylinder?\n");
    scanf("%d", &height);

    vol = (radius * 3.14f) * height;

    printf("The volume of your cylinder is: %d\n", vol);

    return 0;
}