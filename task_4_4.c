#23
#include <stdio.h>

int main(void) {
    long long total_mg;
    printf("Введите массу в мг: ");
    if (scanf("%lld", &total_mg) != 1 || total_mg < 0) {
        printf("Некорректный ввод!\n");
        return 1;
    }

    long long grams = 0;
    long long mg_rest = 0;
    long long place_value_mg = 1;
    long long place_value_g = 1;
    int digit_count = 0;

    if (total_mg == 0) {
        digit_count = 1; 
    }

    while (total_mg > 0) {
        int digit = total_mg % 10;
        
        if (digit_count < 3) {
            mg_rest += digit * place_value_mg;
            place_value_mg *= 10;
        } else {
            grams += digit * place_value_g;
            place_value_g *= 10;
        }

        digit_count++;
        total_mg /= 10;
    }

    printf("Результат: %lld г и %lld мг\n", grams, mg_rest);

    return 0;
}

