#include <stdio.h>

int main() {
    int x = 121;
    int original = x;
    int reversed = 0;

    while (x > 0) {
        reversed = reversed * 10 + x % 10;
        x = x / 10;
    }

    if (original == reversed)
        printf("true\n");
    else
        printf("false\n");

    return 0;
}