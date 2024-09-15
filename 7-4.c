#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 5
#define MAX_NAME_LENGTH 50


void accept_names(char names[MAX_STUDENTS][MAX_NAME_LENGTH]) {
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("Enter the name of student %d: ", i + 1);
        fgets(names[i], MAX_NAME_LENGTH, stdin);
        names[i][strcspn(names[i], "\n")] = 0; // Removing trailing newline character
    }
}


void print_names(char names[MAX_STUDENTS][MAX_NAME_LENGTH]) {
    printf("\nStudent Names:\n");
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("%s\n", names[i]);
    }
}


void sort_names(char names[MAX_STUDENTS][MAX_NAME_LENGTH]) {
    char temp[MAX_NAME_LENGTH];
    for (int i = 0; i < MAX_STUDENTS - 1; i++) {
        for (int j = i + 1; j < MAX_STUDENTS; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

int main() {
    char names[MAX_STUDENTS][MAX_NAME_LENGTH];


    accept_names(names);


    print_names(names);


    sort_names(names);


    printf("\nSorted Student Names:\n");
    print_names(names);

    return 0;
}

