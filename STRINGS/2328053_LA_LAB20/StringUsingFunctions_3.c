/*TO CONCATENATE TWO STRINGS USING FUNCTIONS*/
#include <stdio.h>
#include <string.h>

void concatenateStrings(char *result, const char *string1, const char *string2) {
    strcpy(result, string1); // Copy the first string to the result
    strcat(result, string2); // Concatenate the second string to the result
}

int main() {
    char string1[100];
    char string2[100];
    char result[200]; // Allocate enough space for the concatenated string

    printf("Enter the first string: ");
    fgets(string1, sizeof(string1), stdin);

    printf("Enter the second string: ");
    fgets(string2, sizeof(string2), stdin);

    // Remove the newline characters added by fgets
    if (string1[strlen(string1) - 1] == '\n') {
        string1[strlen(string1) - 1] = '\0';
    }
    if (string2[strlen(string2) - 1] == '\n') {
        string2[strlen(string2) - 1] = '\0';
    }

    concatenateStrings(result, string1, string2);

    printf("Concatenated string: %s\n", result);

    return 0;
}
