/* Write a program in C to copy one string to another string. */

#include <stdio.h>

void copy_string(char *src_str,char *des_str);

int main()
{
    char src_str[50],des_str[50];
    printf("Enter the string: ");
    scanf("%[^\n]s",src_str);
    copy_string(src_str,des_str);
    printf("String after copying: %s\n",des_str);
    return 0;
}

void copy_string(char *src_str,char *des_str)
{
    int i=0;
    while(*src_str)
    {
        des_str[i] = *src_str;
        src_str++;
        i++;
    }
    des_str[i] = '\0';
}
