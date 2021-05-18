#include <stdio.h>
int main()
{
    printf("Enter an expression -");

    float a, b, c;
    char c1, c2;
    int flag = 0;
    scanf("%f %c %f %c %f", &a, &c1, &b, &c2, &c);

    if (a >= 1000 || b >= 1000 || c >= 1000)
    {
        printf("Error: Number exceeded than 1000.\nTry again\n");
        flag = 1;
    }
    else //here operator precedence is taken care of.
    {
        if (c1 == '/')
        {
            if (b == 0)
            {
                printf("Error: Division by 0\nProgram Terminated.Try again\n");
                flag = 1;
            }
            else
                b = a / b;
        }
        if (c1 == '*')
        {
            b = a * b;
        }
        if (c2 == '/')
        {
            if (c == 0)
            {
                printf("Error: Division by 0\nProgram Terminated.Try again\n");
                flag = 1;
            }
            else
                b = b / c;
        }
        if (c2 == '*')
        {
            b = b * c;
        }
        if (c1 == '+')
        {
            b = a + b;
        }
        if (c2 == '+')
        {
            b = b + c;
        }
        if (c1 == '-')
        {
            b = a - b;
        }
        if (c2 == '-')
        {
            b = b - c;
        }
    }
    if (flag != 1)
        printf("Result: %f\nProgram Succesfully Terminated\n", b);
    return 0;
}
