#include "../inc/Header.h"

void mx_fileout(int xSize, int ySize, int arr[xSize][ySize]){
    int handle = open("path.txt", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
    for (int x = 0; x < xSize; x++) {
        for (int y = 0; y < ySize; y++) {
            if (arr[x][y] == -1) write(handle, "#", 1);
            else if (arr[x][y] == -2) write(handle, "*", 1);
            else if (arr[x][y] == -10) write(handle, "X", 1);
            else if (arr[x][y] == -11) write(handle, "D", 1);
            else write(handle, ".", 1);
        }
        write(handle, "\n", 1);
    }
    close(handle);
}
