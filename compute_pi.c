#include <stdio.h>
#include <string.h>

char* add(char* num1, char* num2)
{
    strncat(num1, num2);
    return num1;
}


int main()
{
    char num1[100] = "51224.6576";
    char num2[100] = "78654376867.456467";
    printf("%s", add(num1, num2));
    printf("%s", strncat(num1, num2));
    
    return 0;
}