#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main()
{
void acceptPointerNames(char *names[5]) {
    for (int i = 0; i < 5; i++) {
        names[i] = (char *)malloc(20 * sizeof(char));
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", names[i]);
    }
}

void printPointerNames(char *names[5]) {
    printf("The names of students are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", names[i]);
    }
}

void sortPointerNames(char *names[5]) {
    char *temp;
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }
}

void freePointerNames(char *names[5]) {
    for (int i = 0; i < 5; i++) {
        free(names[i]);
    
