//1

// ASCII converter

#include<stdio.h>
int main()
{
    char str[100];
    printf("\n Enter String: ");
    gets(str);
    asciiConverter(str); // function calling
    return 0;
}

void asciiConverter(char *p) // function def
{
    printf("\n String with ASCII values...\n");
    while(*p!='\0')
    {
        printf("\n%c=%d",*p,*p);
        p++;
    }
}
