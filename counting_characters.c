#include <stdio.h>

int main() {
    int c = 0;
    
    c = getchar();
    int st = 0;
    while( c != EOF) {
        printf("%3d\n", st);
        c = getchar();
        st++;
    }
    return 0;
}