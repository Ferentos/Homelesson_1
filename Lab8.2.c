#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_CTYPE, "RUS");
    double step, x, y;
    printf("Вычисляемая функция: y = x^3 - 4x^2 + 2\n");
    printf("Интервал: [1; 3]\n");
    printf("Введите шаг табуляции: \n");
    scanf("%lf", &step);
    printf("\n=========================\n");
    printf("|    x    |    f(x)    |\n");
    printf("=========================\n");
    for (x = 1.0; x <= 3.0; x += step) {
         y = pow(x, 3) - 4 * pow(x, 2) + 2;
        printf("| %7.3f | %10.6f |\n", x, y);
        
    }
    printf("=========================");

    
    return 0;
}