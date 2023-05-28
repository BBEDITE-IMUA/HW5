#include <stdio.h>

struct Move
{
	int x;
	int y;
};

//Задаём структуру
struct Move getFinishPoint(struct Move arr[], int n) {
    struct Move ab = {0, 0};
    for (int i = 0; i < n; i++)
    {
        // Прибавляем к кординате х и y, следующие координаты
        ab.x += arr[i].x;
        ab.y += arr[i].y;
    }
    // Возвращаем структуру ab
    return ab;
}

int main () {
    struct Move arr[] = {
        {4, 3},
        {6, -1},
        {2, -3},
    };
    printf("%d %d", getFinishPoint(arr, 3).x, getFinishPoint(arr, 3).y);
    return 0;
}