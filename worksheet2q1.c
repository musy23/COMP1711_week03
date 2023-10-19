#include <stdio.h>

 float circleArea (float radius)
{
    float circleArea;
    circleArea = 3.14 * radius * radius;
    return circleArea;
}

 int main () 
{
    float radius;
    printf("Enter the radius of the circle:\n");
    scanf("%f", &radius);
    float area = circleArea(radius);
    printf("The area of the circle is %f.\n", circleArea);

    return 0;
}

