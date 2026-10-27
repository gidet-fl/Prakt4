#17
#include <stdio.h>

int main(void) {
    int n;
    printf("Введите количество элементов N: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    double current_value = 1.0;
    int counter = 0;

    while (counter < n) {
        printf("%.0f ", current_value);
        ++counter;
        current_value *= 1000.0;
    }
    printf("\n");

    return 0;
}
