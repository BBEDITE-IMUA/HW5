#include <stdio.h>

// Задаём структуру
struct Person
{
    int age;
    char name[50];
};

float averageAge(struct Person arr[], int n) {
    // Задаём счётчик суммы возраста
    float s = 0;
    // Считаем сумму возрастов
    for (int i = 0; i < n; i++)
    {
        s = s + arr[i].age;
    }
    // Определяем среднее орифметическое 
    return s / n;
}

int main () {
    struct Person arr[] = {
        {32, "Artem"},
        {74, "Anton"},
    };
    printf("%f", averageAge(arr, 2));
    return 0;
}