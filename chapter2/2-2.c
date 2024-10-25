#include <stdio.h>

int main() {
    printf("Directly written\n");
    printf("%d\n", (5 - 2) * (5 - 2) + (8 - (5 - 2)) * (8 + (5 - 2)));

    printf("Variables\n");
    int a = 5;
    int a_2 = a - 2;
    int b = 8;
    printf("%d\n", a_2 * a_2 + ( b - a_2 ) * ( b + a_2 ));

    return 0;
}
