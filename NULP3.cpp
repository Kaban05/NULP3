#define _CRT_SECURE_NO_WARNINGS
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