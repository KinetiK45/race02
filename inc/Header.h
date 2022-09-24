#ifndef Header_h
#define Header_h

#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/fcntl.h>
#include <string.h>
#include <stdlib.h>

char *mx_strnew(const int size);
char *mx_file_to_str(const char *filename);
void mx_fileout(int xSize, int ySize, int arr[xSize][ySize]);


void mx_calculate_way(int wayData[5], int arr[]);


int mx_calculate_steps(int sizes[2], int xStart, int yStart, int arr[]);
bool mx_isdigit(int c);
bool mx_isspace(char c);
int mx_atoi(const char *str);
void mx_arr_size(const char *filename, int *xSize, int *ySize);
void mx_printerr(const char *s);
void mx_write_arr_from_file(const char *filename, int arr[], int xSize, int ySize);
void mx_start_errors(int argc, const char* argv[]);
void mx_end_errors(const char* argv[], int xSize, int ySize, int arr[xSize][ySize]);
void mx_mid_errors(const char* argv[], int xSize, int ySize, int arr[xSize][ySize]);
//vlad
int mx_strlen(const char *s);
void mx_str_to_array(char *filedata, int xSize, int ySize, int arr[]);
void mx_printchar(char c);
void mx_printint(int n);
void mx_printstr(const char* a);

#endif
