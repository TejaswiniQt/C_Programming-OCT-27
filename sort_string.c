/* Write a C program to sort a string array in ascending order.. */

#include <stdio.h>
#include <string.h>

void sort_string(char *str,int len);

int main()
{
    char str[50];
    int len;
    printf("Enter the string: ");
    scanf("%[^\n]s",str);
    len = strlen(str);
    sort_string(str,len);
    printf("String after sorting: %s\n",str);
    return 0;
}

void sort_string(char *str,int len)
{
    int i,j;
    char ch;
    for(i=0; i<len; i++)
    {
        for(j=i+1; j<len; j++)
        {
            if(str[i] > str[j])
            {
                ch = str[i];
                str[i] = str[j];
                str[j] = ch;
            }
            
        }
    }
}
