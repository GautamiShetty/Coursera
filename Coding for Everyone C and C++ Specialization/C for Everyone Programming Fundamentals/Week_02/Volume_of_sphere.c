//The following code is supposed to produce the volume of a sphere as a 
//double but is using ints.Fix this issue.

#include <stdio.h>
#define PI 3.14159

int main(void)
{
    double radius = 0;
    printf("Enter the radius:");
    scanf("%lf",&radius);
    printf("Volume of Sphere : %.3lf \n\n", (4 * radius * radius * radius / 3) * PI);
    // I have made changes with the variable radius data type.Also multiplied PI with the expression to get the volume.The data specifier in line 7 and line 8 are also changed.
    // This changes are made on line 5.
    return 0;
}