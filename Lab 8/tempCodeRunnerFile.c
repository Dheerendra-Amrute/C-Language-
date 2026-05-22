#include <stdio.h>

// Define the Time structure
struct Time {
    int hours;
    int minutes;
    int seconds;
};

// Function to add two time values
void addTime(struct Time* t1, const struct Time* t2) {
    t1->seconds += t2->seconds;
    t1->minutes += t2->minutes + t1->seconds / 60;
    t1->hours += t2->hours + t1->minutes / 60;

    t1->seconds %= 60;
    t1->minutes %= 60;
    t1->hours %= 24;
}

// Function to display the time
void displayTime(const struct Time* t) {
    printf("%02d:%02d:%02d\n", t->hours, t->minutes, t->seconds);
}

int main() {
    struct Time time1 = {10, 30, 45}; // Example time 1
    struct Time time2 = {3, 20, 15};  // Example time 2

    printf("Time 1: ");
    displayTime(&time1);

    printf("Time 2: ");
    displayTime(&time2);

    addTime(&time1, &time2);

    printf("Sum of times: ");
    displayTime(&time1);

    return 0;
}