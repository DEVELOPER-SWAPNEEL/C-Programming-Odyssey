// /*WAP TO PASS STRING AS IN A FUNCTION AND REPLACE 'a' IN THE STRING WITH 'o'*/
#include <stdio.h>
#include <string.h>

void replace_a_with_o(char *input_string) {
    for (int i = 0; input_string[i] != '\0'; i++) {
        if (input_string[i] == 'a')
        {
            input_string[i] = 'o';
        }
    }
}

int main() {
    char input_string[100];

    printf("Enter a string: ");
    
    scanf("%[^\n]s",input_string);
    puts(input_string);

    replace_a_with_o(input_string);

    printf("Modified string: %s\n", input_string);

    return 0;
}
