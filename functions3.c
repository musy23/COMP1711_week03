#include <stdio.h>
float sum (float a, float b);
//Function declaration, ^typed above^, allows us to move the main function to the top without confronting usual problems... 
//...as compiler reads from top to bottom, and functions have to be defined to use them in main function,

int main () 
{
    float y = 2;
    float z = sum(5, y); // calling our new function

    printf ("The sum of 5 and %f is %f\n", y, z);

    return 0;
}

float sum (float a, float b)
{
    float answer;
    answer = a + b;
    return answer;
}

