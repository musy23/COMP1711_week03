#include <stdio.h>

int sum (int a, int b)
{
    int answer;
    answer = a + b;
    return answer;
}

// order of the variables is more important than the value in a function, so 5 becomes a when function is recalled while b is y.

int main () 
{
    int y = 2;
    int z = sum(5, y); // calling our new function

    printf ("The sum of 5 and %d is %d\n", y, z);
    // printf ("%d", a); would output an error as a is only defined in the sum function, not the main function.
}