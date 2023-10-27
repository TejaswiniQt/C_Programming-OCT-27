/* Write a program in C to extract a substring from a given string. */

#include <stdio.h>
#include <string.h>

void extract_substring(char *str,char *sub_str,int pos,int n);

int main()
{
    char str[50],sub_str[50];
    int pos,n;
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);
    printf("Enter the starting position to extract the substring: ");
    scanf("%d",&pos);
    printf("Enter the number of characters to be extracted: ");
    scanf("%d",&n);
    extract_substring(str,sub_str,pos,n);
    printf("Extracted substring: %s\n",sub_str);
    return 0;
}

void extract_substring(char *str,char *sub_str,int pos,int n)
{
    int i,j,len,k=0;
    len = strlen(str);
    for(i=0; i<len; i++)
    {
        if(i == pos-1)
        {
            for(j=i; j<=(i+n-1); j++)
            sub_str[k++] = str[j];
        }
    }
    sub_str[k] = '\0';
}
