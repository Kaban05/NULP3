//Laboratorna #6

//Zavdannya 1
#include <stdio.h>

int main() {
	int z;
	int w;
	int x = 1;
	int y = 2;
	z = y + x;
	w = y - x;
}

//Zavdannya 2
#define PI 3.14159
#include <stdio.h>
#include <windows.h>
main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int a = 5;
	float b = 23.5;
	int c = 31000;
	printf("%d метрів тканини коштувало %f гривень.\n", a, b);
	printf("Значення числа рі рівне %f.\n", PI);
	printf("IBM розповсюдження.\n)");
	printf("%c%d\n", '$', c);

}

//Zavdannya 3
#define PI 3.14159
#include <stdio.h>
#include <windows.h>
main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	printf("%f\n", 6543.21);
	printf("%e\n", 6543.21);
	printf("%4.2f\n", 6543.21);
	printf("%3.1f\n", 6543.21);
	printf("%10.3f\n", 6543.21);
	printf("%10.3e\n", 6543.21);
}

//Zavdannya 4
#define PI 3.14159
#include <stdio.h>
#include <windows.h>
#define riadok "Чудова погода"

main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	printf("/%2s/\n", riadok);
	printf("/%15.s/\n", riadok);
}

//Zavdannya 5
#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14159
#include <stdio.h>
#include <windows.h>
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int vik;
	char name[30];

	printf("Введіть ваш вік: ");
	scanf("%d", &vik);

	printf("Введіть ваше ім'я: ");
	scanf("%s", name);

	printf("Привіт, %s, якому(ій) %d років!\n", name, vik);

	return 0;
}
