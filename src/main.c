#include "../inc/Header.h"
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int xSize, ySize;
    mx_start_errors(argc, argv);
    mx_arr_size(argv[1], &xSize, &ySize);
    int arr[xSize][ySize];
    mx_str_to_array(mx_file_to_str(argv[1]), xSize, ySize, &arr[0][0]);
    mx_mid_errors(argv, xSize, ySize, arr);
    int sizes[2] = {xSize, ySize};
    int MaxDist = mx_calculate_steps(sizes, mx_atoi(argv[3]), mx_atoi(argv[2]), &arr[0][0]);
    mx_end_errors(argv, xSize, ySize, arr);
    mx_printstr("dist=");
    mx_printint(MaxDist - 1);
    mx_printchar('\n');
    mx_printstr("exit=");
    mx_printint(arr[mx_atoi(argv[5])][mx_atoi(argv[4])] - 1);
    mx_printchar('\n');
    int wayData[5] = { MaxDist, xSize, ySize, mx_atoi(argv[5]), mx_atoi(argv[4]) };
    mx_calculate_way(wayData, &arr[0][0]);
    mx_fileout(xSize, ySize, arr);
    return 0;
}
