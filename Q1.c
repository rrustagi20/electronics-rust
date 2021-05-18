#include <stdio.h>
int main()
{
    printf("What is your name?\n");
    char s[100]; //default memory allocation.
    scanf("%[^\n]",s);
    printf("Hello, %s\nWhat year were you born?\n",s);
    int year;
    scanf("%d",&year);
    printf("Congratulations, you are %d old!\n",(2018-year)); //calculating age wrt year 2018.
    return 0;
}
