#include <stdio.h>

#define PI 3.14159265358979323846

int main() {
    double radius, area, circumference;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("\nFor a circle with radius %.4lf:\n", radius);
    printf("Area          = %.4lf\n", area);
    printf("Circumference = %.4lf\n", circumference);
    return 0;
}
