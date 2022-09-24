#include "../inc/Header.h"

void mx_printchar(char c){
    char* a=&c;
    write(1,a,1);  
}

