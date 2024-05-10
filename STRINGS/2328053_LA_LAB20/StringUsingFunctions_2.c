/*TO COMPAIR TWO STRINGS WHEATHER THEY ARE EQUAL OR NOT USING FUNCTIONS*/
#include <stdio.h>
#include <string.h>

int main() {
    char string1[100];
    char string2[100];

    printf("Enter the first string: ");
    fgets(string1, sizeof(string1), stdin);

    printf("Enter the second string: ");
    fgets(string2, sizeof(string2), stdin);
    
    if (string1[strlen(string1) - 1] == '\n') {
        string1[strlen(string1) - 1] = '\0';
    }
    if (string2[strlen(string2) - 1] == '\n') {
        string2[strlen(string2) - 1] = '\0';
    }

    int result = strcmp(string1, string2);

    if (result == 0) {
        printf("The two strings are equal.\n");
    } else {
        printf("The two strings are not equal.\n");
    }

    return 0;
}
