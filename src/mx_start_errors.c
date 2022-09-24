#include "../inc/Header.h"

void mx_start_errors(int argc, const char* argv[]){
    if(argc != 6){
        mx_printerr("usage: ./way_home [file_name] [x1] [y1] [x2] [y2]\n");
        exit(-1);
    }
    const char *filename = argv[1];
    char *filedata = mx_file_to_str(filename);
    if (filedata == NULL){
        mx_printerr("map does not exist\n");
        exit(-1);
    }
    free(filedata);
}
