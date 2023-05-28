#include <stdio.h>

int abs_arr(int arr[], int n) {
    int schot = 0;
    // Проверяем, если элемент массива меньше нуля то мы унажаем его на -1
    for (int i = 0; i < n; i++)
    {
        if (*(arr+i) < 0) {
            *(arr+i) = *(arr+i) * (-1);
            // К счётчику возведённых в модуль чисел плюсуем 1
            schot++;
        }
    }   
    return schot;
}

int main () {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int schot = abs_arr(arr, n);
    printf("%d ", schot);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}