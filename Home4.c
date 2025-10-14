#include <stdio.h>
#include <locale.h>
#include <math.h>

/*
   Тренер формирует стартовый состав из трех игроков с номерами A, B и C. Он считает,
    что это "счастливая" тройка, если сумма номеров игроков делится на три без остатка.
    Запишите условие для "счастливой" тройки.
*/

int main() {
	int A, B, C, uslovie;
    setlocale(LC_CTYPE, "RUS");
    printf("Введите номера 3-х игроков \n");
    scanf ("%d %d" "%d", &A, &B, &C);
    uslovie = ((A + B + C) % 3);
    printf("Команда счастливая (0 - да, 1 - нет): %d", uslovie);
	getchar();
    return 0;
}