#include "../inc/Header.h"

int mx_calculate_steps(int sizes[2], int xStart, int yStart, int arr[]){
    int dist = 0;
    arr[xStart * sizes[1] + yStart] = 1;
    bool isAdd = true;
    while (isAdd) {
        isAdd = false;
        for (int x = 0; x < sizes[0]; x++) {
            for (int y = 0; y < sizes[1]; y++) {
                if (arr[x * sizes[1] + y] == 0){
                    int temp = 2147483647;
                    if (x + 1 < sizes[0] && arr[(x + 1) * sizes[1] + y] > 0 && arr[(x + 1) * sizes[1] + y] < temp)   temp = arr[(x + 1) * sizes[1] + y];
                    if (x - 1 >= 0 && arr[(x - 1) * sizes[1] + y] > 0 && arr[(x - 1) * sizes[1] + y] < temp) temp = arr[(x - 1) * sizes[1] + y];
                    if (y + 1 < sizes[1] && arr[x * sizes[1] + y + 1] > 0 && arr[x * sizes[1] + y + 1] < temp) temp = arr[x * sizes[1] + y + 1];
                    if (y - 1 >= 0 && arr[x * sizes[1] + y - 1] > 0 && arr[x * sizes[1] + y - 1] < temp) temp = arr[x * sizes[1] + y - 1];
                    if (temp != 2147483647){
                        arr[x * sizes[1] + y] = temp + 1;
                        if (dist < temp + 1) dist = temp + 1;
                        isAdd = true;
                    }
                }
            }
        }
    }
    return dist;
}
