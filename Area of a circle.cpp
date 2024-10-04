
//task 8(area of a circle)
#include <stdio.h>

int main() {
    float radius;
    printf("Enter the radius of the circle:");
    scanf("%f",&radius);
    float area=3.1416*radius*radius;
    
    printf("The Area of the circle for %.2f radius is=%.2f",radius,area);

    return 0;
}
