#include "../inc/Header.h"

void mx_printint(int n){
    if (n < 0) {
        mx_printchar('-');
        n *= -1;
    }
    if (n == 0) mx_printchar('0');
    int size = 0, num = n;
    while (num != 0) {
        num /= 10;
        size++;
    }
    int array[size];
    for (int i = 0; i < size; i++) {
        array[i] = n % 10;
        n /= 10;
    }
    for (int i = size-1; i >= 0; i--) {
        mx_printchar(array[i] + '0');
    }
}

