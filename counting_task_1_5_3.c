#include <stdio.h>

int main() {
    int c = 0;
    c = getchar();
    int space = 0, tab = 0, endstr = 0;
    if(c == ' ') {
        ++space;
    } else {
        if(c == '\t') {
            ++tab;
        } else {
            if(c == '\n') {
                ++endstr;
            }
        }
    }
    printf("space: %3d\ttab: %3d\tendstr: %3d\t\n", space, tab, endstr);
    
    return 0;
}