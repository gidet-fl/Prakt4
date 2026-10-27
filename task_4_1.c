#7
#111260316
#include <stdio.h>

#define CONV_FACTOR 1000

int main(void) {
    long long total_khz;

    printf("Введите частоту в кГц :\n");

    while (scanf("%lld", &total_khz) == 1 && total_khz > 0) {
        long long mhz = total_khz / CONV_FACTOR;
        long long khz = total_khz % CONV_FACTOR;

        printf("%lld кГц = %lld МГц и %lld кГц\n", total_khz, mhz, khz);
        printf("\nВведите следующую величину:\n");
    }

    return 0;
}
