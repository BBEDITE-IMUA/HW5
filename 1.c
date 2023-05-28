#include <stdio.h>

int main () {
    int a;
    scanf("%d", &a);
    //Задаём массив
    int matriks[a];

    // вводим массив
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &matriks[i]);
    }
    // Выводим элементы массива от середины до конца
    for (int i = a/2; i < a; i++)
    {
        printf("%d ", matriks[i]);
    }
    // Выводим элементы масссива от начала до середины
    for (int i = 0; i < a/2; i++)
    {
        printf("%d ", matriks[i]);
    }
    return 0;
}