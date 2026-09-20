#include <stdio.h>
int main() {
    float l, b;
    printf("Enter length & breadth: ");
    scanf("%f %f", &l, &b);
    printf("Area = %.2f\nPerimeter = %.2f", l*b, 2*(l+b));
    return 0;
}
