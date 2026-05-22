/*2. Create a structure called point to represent a point in 2D space with 'x' and 'y'
coordinates. Write functions to calculate the distance between two points and the
midpoint of a line segment given by two points.*/
#include <stdio.h>
#include <math.h>

// Define the Point structure
struct Point {
    float x;
    float y;
};

// Function to calculate the distance between two points
float distance_between_points(struct Point point1, struct Point point2) {
    float dx = point2.x - point1.x;
    float dy = point2.y - point1.y;
    return sqrt(dx * dx + dy * dy);
}

// Function to find the midpoint of a line segment
struct Point midpoint(struct Point point1, struct Point point2) {
    struct Point mid;
    mid.x = (point1.x + point2.x) / 2;
    mid.y = (point1.y + point2.y) / 2;
    return mid;
}

int main() {
    struct Point pointA = {3.0, 4.0};
    struct Point pointB = {7.0, 9.0};

    float distance = distance_between_points(pointA, pointB);
    struct Point mid = midpoint(pointA, pointB);

    printf("Distance between points A and B: %.2f units\n", distance);
    printf("Midpoint coordinates: (%.2f, %.2f)\n", mid.x, mid.y);

    return 0;
}