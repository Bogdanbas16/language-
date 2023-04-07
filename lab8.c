//Визначає третє слово з речення.
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    printf("Введіть речення: ");
    fgets(str, 1000, stdin);

    char *token = strtok(str, " ");
    int count = 0;

    while (token != NULL) {
        count++;
        if (count == 3) {
            printf("Третє слово: %s\n", token);
            break;
        }
        token = strtok(NULL, " ");
    }

    return 0;
}
