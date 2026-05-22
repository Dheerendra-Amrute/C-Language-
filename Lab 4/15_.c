#include <stdio.h>

int main() {
    char sentence[1000];
    int i, count = 0;

    // Read the sentence from user input
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Count the characters excluding spaces
    for (i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] != ' ' && sentence[i] != '\n') {
            count++;
        }
    }

    printf("Number of characters (excluding spaces): %d\n", count);

    return 0;
}