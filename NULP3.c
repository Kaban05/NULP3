#include <stdio.h>

int main() {
	int z;
	int w;
	int x = 1;
	int y = 2;
	z = y + x;
	w = y - x;
}

#define PI 3.14159
#include <stdio.h>
#include <windows.h>
main()

{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int a = 5;
	float b = 23.5;
	int c = 31000;
	printf("%d ����� ������� ��������� %f �������.\n", a, b);
	printf("�������� ����� � ���� %f.\n", PI);
	printf("IBM ��������������.\n)");
	printf("%c%d\n", '$', c);

}

#define PI 3.14159
#include <stdio.h>
#include <windows.h>
main()
{
	printf("%f\n", 6543.21);
	printf("%e\n", 6543.21);
	printf("%4.2f\n", 6543.21);
	printf("%3.1f\n", 6543.21);
	printf("%10.3f\n", 6543.21);
	printf("%10.3e\n", 6543.21);
}

#define PI 3.14159
#include <stdio.h>
#include <windows.h>
#define riadok "������ ������"

main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	printf("/%2s/\n", riadok);
	printf("/%15.s/\n", riadok);
}

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

	printf("������ ��� ��: ");
	scanf("%d", &vik);

	printf("������ ���� ��'�: ");
	scanf("%s", name);

	printf("�����, %s, �����(��) %d ����!\n", name, vik);

	return 0;
}