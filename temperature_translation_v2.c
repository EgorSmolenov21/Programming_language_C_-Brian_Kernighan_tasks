#include <stdio.h>
//вывод таблици температур по фаренгейту и цельсия, версия с вещественными числами.
int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower; 
    printf("Temperature translation");
    while(fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr-32.0);
        printf("fhar: %3.0f\t celsius: %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}