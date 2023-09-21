#include "main.h"

void print_buffer(char *b, int size) {
    int i, j;

    if (size <= 0) {
        _putchar('\n');
        return;
    }

    for (i = 0; i < size; i += 10) {
        _putchar('0' + ((i >> 24) & 0xF));
        _putchar('0' + ((i >> 20) & 0xF));
        _putchar('0' + ((i >> 16) & 0xF));
        _putchar('0' + ((i >> 12) & 0xF));
        _putchar('0' + ((i >> 8) & 0xF));
        _putchar('0' + ((i >> 4) & 0xF));
        _putchar('0' + (i & 0xF));
        _putchar(':');
        _putchar(' ');

        for (j = 0; j < 10; j++) {
            if (i + j < size) {
                unsigned char c = b[i + j];
                _putchar((c >= 32 && c <= 126) ? c : '.');
                _putchar(' ');

                _putchar('0' + ((c >> 4) & 0xF));
                _putchar('0' + (c & 0xF));
            } else {
                _putchar(' ');
                _putchar(' ');
                _putchar(' ');
                _putchar(' ');
                _putchar(' ');
                _putchar(' ');
            }

            if (j == 9 || i + j == size - 1) {
                _putchar('\n');
            } else {
                _putchar(' ');
            }
        }
    }
}

