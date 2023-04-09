#include <stdio.h>

int main() {
    char c = 0;
    
    c = getchar();
    int st = 0;
    while( st != 20) {
        c = getchar();
        if(c == '\n'){
            st++;
        }
        printf("%3d\n", st);    
    }
    return 0;
}