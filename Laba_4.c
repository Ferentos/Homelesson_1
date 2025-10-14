#include <stdio.h>
#include <locale.h>


int main() {
    void lesson1();
    void lesson2();
    void lesson3();
    setlocale(LC_CTYPE, "RUS");
    //lesson1();
    //lesson2();
    lesson3();
    return 0;
}

void lesson1 () {
    char c;
    int i;
    float f;
    double d;
    setlocale(LC_CTYPE, "RUS");
    
    printf("Введите символ: ");
    scanf(" %c", &c);
    printf("Введите целое число: ");
    scanf("%d", &i);
    printf("Введите float число: ");
    scanf("%f", &f);
    printf("Введите double число: ");
    scanf("%lf", &d);
    int int_part = (int)d;
    double dou_part = d - int_part;
    printf("Вывод символа - %c \n", c);
    printf("Десятичный код символа - %d\n", c);
    printf("Шестнадцатеричный код символа: 0x%X\n", (unsigned char)c);
    printf("Вывод целого числа - %d \n", i);
    printf("Вывод дробного числа - %f \n", f);
    printf("Вывод 2-го дробного числа - %lf \n", d);
    printf("Вывод целой части дробного числа - %d \n", int_part);
    printf("Вывод дробной части дробного числа - %lf \n", dou_part);
    getchar();
}

void lesson2 () {
    int a = 11, b = 3;
    setlocale(LC_CTYPE, "RUS");
    printf("Вывод float - %f Вывод double - %lf \n", ((float) a / b), ((double) a / b));
    getchar();
}

void lesson3 () {
    int n, a, b, c;
    setlocale(LC_CTYPE, "RUS");
    printf("Ваше число - \n");
    scanf("%d", &n);
    a =  n / 100;
    b = (n / 10) % 10;
    c = n % 10;
    printf("Последняя цифра %d, первая - %d, сумма цифр %d", c, a, a + b + c);
    getchar();
}