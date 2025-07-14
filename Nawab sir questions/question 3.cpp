#include <stdio.h>
#define PI 3.14159  // pi r value tu define kri disu

int main() {
    float radius, area;

    printf("Enter radius: ");
    scanf("%f", &radius);  // radius tu loi loisu

    area = PI * radius * radius;  // formula tu
    printf("Area = %.2f\n", area);

    return 0;
}

