/* Write a program in C to count the total number of vowels or consonants in a string. */

#include <stdio.h>

void count_vowels_const(char *str,int *vowels_count,int *const_count);

int main()
{
    char str[50];
    int vowels_count=0,const_count=0;
    printf("Enter the string: ");
    scanf("%[^\n]s",str);
    count_vowels_const(str,&vowels_count,&const_count);
    printf("Vowels count = %d\n",vowels_count);
    printf("Constants count = %d\n",const_count);
    return 0;
}

void count_vowels_const(char *str,int *vowels_count,int *const_count)
{
    while(*str)
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
        (*vowels_count)++;
        else
        {
            if(*str >= 65 && *str <= 90 || *str >=97 && *str <= 122)
            (*const_count)++;
        }
        str++;
    }
}
