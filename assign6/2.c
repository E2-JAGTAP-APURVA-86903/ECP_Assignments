#include <stdio.h>

size_t my_strlen(const char* str) {
    size_t len = 0;
    while (str[len] != '\0')
        len++;
    return len;
}

char* my_strcpy(char *dest, const char *src) {
    char *ptr = dest;
    while ((*ptr++ = *src++) != '\0');
    return dest;
}

char* my_strcat(char *dest, const char *src) {
    char *ptr = dest + my_strlen(dest);
    while ((*ptr++ = *src++) != '\0');
    return dest;
}

int my_strcmp(const char *str1, const char *str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *(unsigned char *)str1 - *(unsigned char *)str2;
}

int my_stricmp(const char *str1, const char *str2) {
    while (*str1 && (tolower(*str1) == tolower(*str2))) {
        str1++;
        str2++;
    }
    return tolower(*(unsigned char *)str1) - tolower(*(unsigned char *)str2);
}

char* my_strrev(char* str) {
    char *start = str, *end = str + my_strlen(str) - 1, temp;
    while (end > start) {
        temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
    return str;
}

char* my_strchr(const char *str, int ch) {
    while (*str) {
        if (*str == ch)
            return (char *)str;
        str++;
    }
    return NULL;
}

char* my_strstr(const char *str, const char *substr) {
    while (*str) {
        const char *p1 = str, *p2 = substr;
        while (*p1 && *p2 && (*p1 == *p2)) {
            p1++;
            p2++;
        }
        if (!*p2)
            return (char *)str;
        str++;
    }
    return NULL;
}

