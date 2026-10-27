#11
#include <stdio.h>
#include <stdint.h>

int main(void) {
    uint16_t u, i;

    printf("Введите два значения (u и i): ");
    if (scanf("%hu %hu", &u, &i) != 2 || i == 0) {
        printf("Некорректный ввод или деление на ноль!\n");
        return 1;
    }

    float result = (float)u / i;

    printf("Результат вычисления: %f\n", result);

    printf("\nРазмеры типов данных:\n");
    printf("Размер uint16_t: %llu байт\n", (unsigned long long)sizeof(uint16_t));
    printf("Размер float:    %llu байт\n", (unsigned long long)sizeof(float));

    return 0;
}
