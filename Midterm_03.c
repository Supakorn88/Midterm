#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("++++++++++++++++++++++++++++++\n");
    printf(" Program Celcius to Fahrenheit\n");
    printf("++++++++++++++++++++++++++++++\n");

    printf("Enter Celsius temperature: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("++++++++++++++++++++++++++++++\n");
    printf("Fahrenheit is: %.2f\n", fahrenheit);
    printf("++++++++++++++++++++++++++++++\n");

    return 0;
}