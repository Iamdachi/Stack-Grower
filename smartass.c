#include <stdio.h>
#include <string.h>

int main () {
    int x = 55;
    printf("first came: %p\n", &x);
    
    int y = 77;
    printf("then came: %p\n", &y);

    if (&y > &x) {
        printf("Stack grows up!\n");
    } else {
        printf("Stack grows down!\n");
    }

    return 0;
}
