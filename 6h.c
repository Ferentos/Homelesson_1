#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_CTYPE, "RUS");
    int N;
    printf("Введите число N (N < 1000): \n");
    scanf("%d", &N);

    if (N < 10) {
        if (N == 5) {
            printf("Число %d содержит цифру 5\n", N);
        } else {
            printf("Число %d не содержит цифру 5\n", N);
        }
    }
     else if (N < 100) {
        int digit1 = N / 10;    // первая цифра
        int digit2 = N % 10;    // вторая цифра
        
        if (digit1 == 5 || digit2 == 5) {
            printf("Число %d содержит цифру 5\n", N);
        } else {
            printf("Число %d не содержит цифру 5\n", N);
        }
    }
    else {
        int digit1 = N / 100;           // первая цифра
        int digit2 = (N / 10) % 10;     // вторая цифра
        int digit3 = N % 10;            // третья цифра
        
        if (digit1 == 5 || digit2 == 5 || digit3 == 5) {
            printf("Число %d содержит цифру 5\n", N);
        } else {
            printf("Число %d не содержит цифру 5\n", N);
        }
    }
    return 0;
}