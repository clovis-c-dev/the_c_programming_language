#include <stdio.h>
/*print fahrenheit-celcius table*/
int main(){
    float fahr, celsius;
    int lower, upper, step;
    lower = 0; // lowoer limit  of temperature table
    upper = 300; // upper limit
    step = 20; // step size
    fahr = lower;
    printf("*********************\n");
    printf("fahr(F)\t | celsius(C)\n");
    printf("*********************\n");
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("|  %3.0f\t | %6.1f   |\n", fahr, celsius);
        fahr += step;
    }
    printf("*********************\n");
}
