/* Write a program in C to read a string from the keyboard and sort it using bubble sort. */

#include <stdio.h>
#include <string.h>

void bubble_sort(char (*str)[15],int n);

int main()
{
    char str[10][15];
    int n,i;
    printf("Enter the number of strings: ");
    scanf("%d",&n);
    printf("Enter %d strings:\n",n);
    for(i=0; i<=n; i++)
    {
        fgets(str[i],sizeof(str),stdin);
    }
    bubble_sort(str,n);
    printf("After sorting:");
    for(i=0; i<=n; i++)
    {
        printf("%s",str[i]);
    }
    return 0;
}

void bubble_sort(char (*str)[15],int n)
{
    int i,j;
    char temp[15];
    for(i=1; i<=n; i++)
    {
        for(j=0; j<=n-i; j++)
        {
            if((strcmp(str[j],str[j+1])) > 0)
            {
                strcpy(temp,str[j]);
                strcpy(str[j],str[j+1]);
                strcpy(str[j+1],temp);
            }
        }
    }
}
