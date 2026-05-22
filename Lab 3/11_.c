#include <stdio.h>

int main() {
    int marks[10];
    int frequency[10] = {0}; // Initialize frequency array with zeros

    // Reading marks
    printf("Enter marks of 10 students:\n");
    for (int i = 0; i < 10; i++) {
        printf("Enter mark for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Counting frequencies
    for (int i = 0; i < 10; i++) {
        int group = marks[i] / 10;
        frequency[group]++;
    }

    // Displaying result
    printf("Group\tFrequency\n");
    for (int i = 0; i < 10; i++) {
        int lowerLimit = i * 10;
        int upperLimit = (i + 1) * 10 - 1;
        printf("%d-%d\t%d\n", lowerLimit, upperLimit, frequency[i]);
    }

    return 0;
}