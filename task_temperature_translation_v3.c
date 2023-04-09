#include <stdio.h>
//вывод таблици температур по фаренгейту и цельсия, версия с вещественными числами.
int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower; 
    printf("Temperature translation\n");
    while(fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr-32.0);
        printf("fhar: %3.0f\t celsius: %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    //перевод температувы по Цельсию в щкалу фаренгейта
    //1,8 умножить на температуру по Цельсию и прибавить 32.

    printf("celsius -> fahr\n");
    while( celsius >= 0) {
        fahr = celsius * 1.8 + 32;
        printf("celsius: %3.1f\t fhar:%6.0f\n", celsius, fahr);
        celsius = celsius - 12;
    }
    return 0;
}