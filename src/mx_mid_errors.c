#include "../inc/Header.h"

void mx_mid_errors(const char* argv[], int xSize, int ySize, int arr[xSize][ySize]){
    if(mx_atoi(argv[3]) >= xSize || mx_atoi(argv[3]) < 0 || mx_atoi(argv[5]) >= xSize || mx_atoi(argv[5]) < 0 || mx_atoi(argv[2]) >= ySize || mx_atoi(argv[2]) < 0 || mx_atoi(argv[4]) >= ySize || mx_atoi(argv[4]) < 0) {
        mx_printerr("points are out of map range\n");
        exit(-1);
    }
    if(arr[mx_atoi(argv[3])][mx_atoi(argv[2])] == -1){
        mx_printerr("entry point cannot be an obstacle\n");
        exit(-1);
    }
    if(arr[mx_atoi(argv[5])][mx_atoi(argv[4])] == -1){
        mx_printerr("exit point cannot be an obstacle\n");
        exit(-1);
    }
}
