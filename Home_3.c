#include <stdio.h>
#include <locale.h>
double main() {
	double r1, r2;
    setlocale(LC_CTYPE, "RUS");
    scanf_s("%f", &r1);
    scanf_s("%f", &r2);
    printf ("Последовательное соединение равно %f ",r1 + r2);
    printf ("Паралельное соединение равно %f ",r1* r2 / (r1 + r2));
	getchar();
    return 0;
}