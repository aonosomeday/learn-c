#include <stdio.h>

int main() {
    printf("Variables\n");
    int x   = 5;
    int x_2 = x * x;
    int x_4 = x_2 * x_2;

    printf("%d\n", 4 * x_4 + 4 * x_2 + 1);

    printf("Directly written\n");
    printf("%d\n", 4 * ((5 * 5) * (5 * 5)) + 4 * (5 * 5) + 1);
    return 0;
}
