#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int  i = 10;
    float f = 3.14;
    char ch = 'A';
    long LN = 1234567890;

    printf("��� ������������:\n");
    printf("ֳ�� �����: %d\n", i);
    printf("ĳ���� �����: %f\n", f);
    printf("������: %c\n", ch);
    printf("����� ���� �����: %ld\n", LN);

    printf("    \n");

    printf("������������ ������������:\n");
    printf("ֳ�� ����� (����): %+d\n", i); // ������ ����
    printf("ĳ���� ����� (�����������): %e\n", f); // ³���������� � ������ e
    printf("������ (�� ���� �����): %d\n", ch); // ������ ASCII-��� �������
    printf("����� ���� ����� (��������������): %lx\n", LN); // ������������ � �������������� �����

    return 0;
}
