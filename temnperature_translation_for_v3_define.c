#include <stdio.h>

#define LOWER 0 // нижний предел диапазона температур
#define UPPER 300 // верхний предел диапазона темепратур
#define STEP 20 // шаг изменения диапазона температур

int main() {
    int fahr;
    for(fahr = LOWER; fahr <= UPPER; fahr += STEP) {
        printf("fahr: %3d\t celsius: %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
}