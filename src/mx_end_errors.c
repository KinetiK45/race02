#include "../inc/Header.h"

void mx_end_errors(const char* argv[], int xSize, int ySize, int arr[xSize][ySize]){
    if (arr[mx_atoi(argv[5])][mx_atoi(argv[4])] == 0){
        mx_printerr("route not found\n");
        exit(-1);
    }
}
