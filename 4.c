#include <stdio.h>

void reduce_fraction(int * a, int * b) {
    int schot = 0;
    // Создаём цикл
    for (int i = 1; i < *b; i++)
    {
        // Если каждое из чисел дроби делится нацело на элемент i то записываем число i в переменную schot
        if(*a % i == 0 && *b % i == 0) {
            // Самое последние целое деление будет максимальным для этих чисел 
            schot = i;
        }
    }
    // Делим каждое число в дроби на их общий максимальный делитель
    *a = *a / schot;
    *b = *b / schot;
}

int main () {
    int a = 14;
    int b = 49;
    reduce_fraction(&a, &b);
    printf("%d %d\n", a ,b);
    return 0;
}