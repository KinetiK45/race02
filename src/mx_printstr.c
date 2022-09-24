#include "../inc/Header.h"

void mx_printstr(const char* a){
    write(1, a, mx_strlen(a));
}

