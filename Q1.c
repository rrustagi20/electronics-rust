#include <stdio.h>
int main()
{
    printf("What is your name?\n");
    char s[100];
    scanf("%[^\n]",s);
    printf("Hello, %s\nWhat year were you born?\n",s);
    int year;
    scanf("%d",&year);
    printf("Congratulations, you are %d old!\n",(2018-year));
    return 0;
}