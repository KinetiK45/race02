#include "../inc/Header.h"
#include <stdio.h>

void mx_arr_size(const char *filename, int *xSize, int *ySize){
    char *filedata = mx_file_to_str(filename);
    int xcount = 0, ycount = 0, i = 0;
    while (filedata[i] != '\0') {
        if (filedata[i] == '#' || filedata[i] == '.') ycount++;
        else if (filedata[i] == '\n') xcount++;
        else if (filedata[i] != ','){
            mx_printerr("map error\n");
            exit(-1);
        }
        i++;
    }
    if (ycount % xcount != 0 || ycount == 0 || xcount == 0 || ycount/xcount == xcount){
        mx_printerr("map error\n");
        exit(-1);
    }
    ycount /= xcount;
    *xSize = xcount;
    *ySize = ycount;
    free(filedata);
}
