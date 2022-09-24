#include "../inc/Header.h"

void mx_str_to_array(char *filedata, int xSize, int ySize, int arr[]){
    int k = 0;
    for (int i = 0; i < xSize; i++){
        for (int j = 0; j <ySize; j++){
                 if (filedata[k] == ','
                     || filedata[k] == '\n') k++;
            if (filedata[k] == '#') arr[i * ySize + j] = -1;
            if (filedata[k] == '.') arr[i * ySize + j] = 0;
            k++;
        }
    }
    free(filedata);
}

