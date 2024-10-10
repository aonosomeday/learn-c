#include <stdio.h>

int main() {
    // Formula: 5 + ( 3 - 8 * 2 + (13 % 3) / 5) * 2
    // 5 + ( 3 - 16 + 1 / 5 ) * 2
    // 5 + ( 3 - 16 ) * 2
    // 5 + ( -13 ) * 2
    // -21
    printf("Prediction: -21\n");
    printf("Actual: %d\n", 5 + ( 3 - 8 * 2 + (13 % 3) / 5) * 2);

    // Formula: -9 * (2 / 7) + (4 % (1 + 2) * 6)
    // -9 * 0 + ( 4 % 3 * 6)
    // 1 * 6
    // 6
    printf("Prediction: 6\n");
    printf("Actual: %d\n", -9 * (2 / 7) + (4 % (1 + 2) * 6));

    // Formula: +8 / -3 + 4 * 3 % +7 / 2
    // -2 + 12 % +7 / 2
    // -2 + 5 / 2
    // -2 + 2
    // 0
    printf("Prediction: 0\n");
    printf("Actual: %d\n", +8 / -3 + 4 * 3 % +7 / 2);

    return 0;
}
