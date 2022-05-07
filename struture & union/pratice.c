// program to calculate the area of rectangle using its coordinates

#include <stdio.h>

struct coordinate {
    int x, y;
};

struct rectangleNate {
    struct coordinate upperLeft;
    struct coordinate lowerRight;
};

int rectangleArea (struct rectangleNate rectangle) {
    int length = rectangle.lowerRight.x - rectangle.upperLeft.x;
    int width = rectangle.upperLeft.y - rectangle.lowerRight.y;
    return length*width;
}

void main () {
    struct rectangleNate rectangle;
    printf("\ngive the x coordinates of upper left corner:");
    scanf("%d", &rectangle.upperLeft.x);
    printf("\ngive the y coordinates of upper left corner:");
    scanf("%d", &rectangle.upperLeft.y);
    printf("\ngive the x coordinates of lower right corner:");
    scanf("%d", &rectangle.lowerRight.x);
    printf("\ngive the y coordinates of lower right corner:");
    scanf("%d", &rectangle.lowerRight.y);
    printf("\n%d", rectangleArea(rectangle));
}