#include <stdio.h>
#include <math.h>
int main() 
{
    float a,b,c,discriminant,x1,x2;
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);
    discriminant = (b * b) - (4 * a * c);
    if (discriminant > 0) 
    {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct: %f and %f\n", x1, x2);
    } 
    else if (discriminant == 0) 
    {
        x1 = -b / (2 * a);
        printf("Roots are real and equal: %f\n", x1);
    } 
    else 
    {
        printf("Roots are imaginary/complex. No real roots exist.\n");
    }

    return 0;
}
