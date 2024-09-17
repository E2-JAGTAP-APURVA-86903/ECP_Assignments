#include <stdio.h>

void remove_char(char *str, char ch) {
    char *src = str, *dest = str;
    while (*src) {
        if (*src != ch)
            *dest++ = *src;
        src++;
    }
    *dest = '\0';
}

int main() {
    char str[] = "hello world";
    remove_char(str, 'o');
    printf("Result: %s\n", str);
    return 0;
}
