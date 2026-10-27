#27
#include <stdio.h>

double yr_to_day(double yr) {
    const double DAYS_IN_YEAR = 365.0;
    return yr * DAYS_IN_YEAR;
}

int main(void) {
    double years;

    printf("Введите количество лет:\n");

    while (scanf("%lf", &years) == 1) {
        double days = yr_to_day(years);
        printf("%.2f лет = %.2f дней\n", years, days);
        printf("\nВведите следующее значение:\n");
    }

    printf("Программа завершена.\n");
    return 0;
}
