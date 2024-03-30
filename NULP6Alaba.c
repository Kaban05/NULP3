#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int  i = 10;
    float f = 3.14;
    char ch = 'A';
    long LN = 1234567890;

    printf("Без модифікаторів:\n");
    printf("Ціле число: %d\n", i);
    printf("Дійсне число: %f\n", f);
    printf("Символ: %c\n", ch);
    printf("Довге ціле число: %ld\n", LN);

    printf("    \n");

    printf("Використання модифікаторів:\n");
    printf("Ціле число (знак): %+d\n", i); // Показує знак
    printf("Дійсне число (відображення): %e\n", f); // Відображення у форматі e
    printf("Символ (як ціле число): %d\n", ch); // Виведе ASCII-код символу
    printf("Довге ціле число (шістнадцяткове): %lx\n", LN); // Перетворення у шістнадцяткову форму

    return 0;
}
