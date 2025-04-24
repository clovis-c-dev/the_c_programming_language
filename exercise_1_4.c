#include <stdio.h>

int main(void){
    float fahr, celsius;
    int step, max;
    celsius = -50.0;
    step = 10;
    max = 300;
    printf("***************\n");
    printf("Celsius\tFahr\n");
    printf("***************\n");
    // just write the table celsius-fahr
    while(celsius <= 300){
        fahr = (9.0 / 5.0 * celsius) + 32.0;
        printf("%3.0f\t%6.0f\n", celsius, fahr);
        celsius += step;
    }
    printf("***************\n");
}
