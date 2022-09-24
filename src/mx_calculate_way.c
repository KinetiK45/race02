#include "../inc/Header.h"

void mx_calculate_way(int wayData[5], int arr[]){
    int xWay = wayData[3], yWay = wayData[4];
    bool isMaxWay = false;
    if (arr[xWay * wayData[2] + yWay] == wayData[0]) isMaxWay = true;
    while (arr[xWay * wayData[2] + yWay] != -2) {
        if (arr[(xWay + 1) * wayData[2] + yWay] == arr[xWay * wayData[2] + yWay] - 1) arr[xWay++ * wayData[2] + yWay] = -2;
        else if (arr[(xWay - 1) * wayData[2] + yWay] == arr[xWay * wayData[2] + yWay] - 1) arr[xWay-- * wayData[2] + yWay] = -2;
        else if (arr[xWay * wayData[2] + yWay + 1] == arr[xWay * wayData[2] + yWay] - 1) arr[xWay * wayData[2] + yWay++] = -2;
        else if (arr[xWay * wayData[2] + yWay - 1] == arr[xWay * wayData[2] + yWay] - 1) arr[xWay * wayData[2] + yWay--] = -2;
        if (arr[xWay * wayData[2] + yWay] == 1) arr[xWay * wayData[2] + yWay] = -2;
    }
    if (isMaxWay) arr[wayData[3] * wayData[2] + wayData[4]] = -10;
    for (int x = 0; x < wayData[1]; x++) {
        for (int y = 0; y < wayData[2]; y++) {
            if (arr[x * wayData[2] + y] == wayData[0]) arr[x * wayData[2] + y] = -11;
        }
    }
}
