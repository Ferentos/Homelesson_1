#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    double start = 2.0;
    double end = 4.0;
    double step;
    int i, n;
    setlocale(LC_CTYPE, "RUS");
    printf("Функция: y = 2^x - 2x^2 - 1\n");
    printf("Интервал: [2;4]\n");
    printf("Введите значение шага табуляции: ");
    scanf("%lf", &step);

    n = (int)((end - start) / step) + 1;

     for (i = 0; i < n; i++) {
        double x = start + i * step;
        double y = pow(2, x) - 2 * pow(x, 2) - 1;
         printf("%8.4f | %8.4f\n", x, y);
     }
    return 0;
}
