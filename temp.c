#include <stdio.h>

int mian(void){
    float TempC;
    float TempF;

    printf("What is the temperature in Celcius?\n");
    scanf("%f", &TempC);

    TempF = (TempC * 1.8f) + 32.0f;

    printf("Your temperature is %.1f F!\n", TempF);

    return 0;
}