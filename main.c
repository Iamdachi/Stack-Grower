#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool up(int * other) {
    int x;

    if (other == NULL) {
        return up(&x);
    } else {
        return &x > other;
    }
}

int main () {
    printf("%s\n", up(NULL)  ? "Stack Grows Up!" : "Stack Grows Down!");
    return 0;
}
