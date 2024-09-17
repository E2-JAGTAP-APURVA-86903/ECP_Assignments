#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "Hello";
    char str2[100] = "World";

    printf("strlen(str1): %zu\n", strlen(str1));
    strcpy(str1, str2);
    printf("After strcpy(str1, str2): %s\n", str1);
    strcat(str1, " Everyone");
    printf("After strcat(str1, \" Everyone\"): %s\n", str1);
    printf("strcmp(str1, str2): %d\n", strcmp(str1, str2));
    printf("stricmp(str1, \"WORLD\"): %d\n", stricmp(str1, "WORLD"));
    printf("strrev(str1): %s\n", strrev(str1));
    printf("strchr(str1, 'o'): %s\n", strchr(str1, 'o'));
    printf("strstr(str1, \"one\"): %s\n", strstr(str1, "one"));
    strncpy(str2, "New", 3);
    printf("After strncpy(str2, \"New\", 3): %s\n", str2);
    strncat(str1, " Day", 4);
    printf("After strncat(str1, \" Day\", 4): %s\n", str1);
    printf("strncmp(str1, \"New\", 3): %d\n", strncmp(str1, "New", 3));
    char *token = strtok(str1, " ");
    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, " ");
    }

    return 0;
}
