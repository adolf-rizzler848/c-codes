#include <stdio.h>

int main() {

    char str[200];
    int i = 0;

    printf("Enter an alphanumeric string:\n");
    fgets(str, sizeof str, stdin);

    // Remove newline
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }

    printf("Output String:\n");

    for (i = 0; str[i] != '\0'; i++) {

        if (str[i] >= '0' && str[i] <= '9') {

            switch (str[i]) {
                case '0': printf("zero "); break;
                case '1': printf("one "); break;
                case '2': printf("two "); break;
                case '3': printf("three "); break;
                case '4': printf("four "); break;
                case '5': printf("five "); break;
                case '6': printf("six "); break;
                case '7': printf("seven "); break;
                case '8': printf("eight "); break;
                case '9': printf("nine "); break;
            }

        } else {
            printf("%c", str[i]);
        }
    }

    return 0;
}