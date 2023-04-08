//Визначає третє слово з речення.
//Визначає третє слово з речення.

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000];
    printf("Введіть речення: ");
    fgets(sentence, 1000, stdin); // зчитуємо рядок з консолі

    char* words[1000];
    char* word = strtok(sentence, " "); // розділяємо рядок на слова
    int i = 0;
    while (word != NULL) {
        words[i] = word;
        word = strtok(NULL, " ");
        i++;
    }

    if (i >= 3) { // перевіряємо, чи є в рядку щонайменше 3 слова
        printf("Третє слово з речення: %s", words[2]); // виводимо третє слово
    }
    else {
        printf("В реченні менше трьох слів.");
    }

    return 0;
}

