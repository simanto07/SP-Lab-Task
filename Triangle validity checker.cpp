//task 6(Triangle validity checker)
#include <stdio.h>

int main() {
    float a, b, c;
    printf("Enter the lengths of the three sides of the triangle:\n");
    scanf("%f %f %f", &a, &b, &c);
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("The lengths %.2f, %.2f, and %.2f can form a triangle.\n", a, b, c);
    } else {
        printf("The lengths %.2f, %.2f, and %.2f cannot form a triangle.\n", a, b, c);
    }

    return 0;
}
