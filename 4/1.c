#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "RUS");
//1
	char c = '!';
	int i = 2;
	float f = 3.14f;
	double d = 5e-12;
	printf("Примеры:\nchar = %c \nint = %i \nfloat = %f \ndouble = %lf \n", c, i, f, d);
	printf("Введите значения\n");
	printf("char\n");
	scanf("%c",&c);
	printf("int\n");
	scanf("%d", &i);
	printf("float\n");
	scanf("%f", &f);
	printf("double\n");
	scanf("%lf", &d);
	printf("Результаты:\n char = %.c\n int = %.i\n float = %.3f\n double = %.3lf\n", c, i, f, d);


//2
	int a = 11, b = 3;
	int x = a / b;
	float y = (float)(a/b);
	double z = (double)(a/b);
	printf("x=%d;\ny=%f;\nz=%lf;\n",x, y, z);


//3
	int A, B, C, sum , ze;
	printf("Введите целое трехзначное значение\n");
	scanf("%d", &A);
	B = A % 10;
	C = A / 100;
	sum = (A - B - C * 100) / 10 + C + B;
	ze = (A - B - C * 100) + B * 100 + C;
	printf("Последняя цифра введенного значения - %d\nПервая цифра введенного значения - %d\nСумма цифр введенного значения - %d\nЗеркальное отображения числа - %d", B, C, sum, ze);
}