/* Write a program in C to find the maximum number of characters in a string. */

#include <stdio.h>
#include <string.h>

void frequency_of_char(char *str,int *freq_arr,int len);

int main()
{
    char str[50];
    int freq_arr[50],i,len,max=0,index;
    printf("Enter the string: ");
    scanf("%[^\n]s",str);
    len = strlen(str);
    for(i=0; i<len; i++)
    freq_arr[i] = -1;
    frequency_of_char(str,freq_arr,len);
    for(i=0; i<len; i++)
    {
        if(freq_arr[i] > max)
        {
            max = freq_arr[i];
            index = i;
        }
    }
    printf("The highest frequency of character '%c' is : %d\n",str[index],max);
    return 0;
}

void frequency_of_char(char *str,int *freq_arr,int len)
{
    int i,j,count;
    for(i=0; i<len; i++)
    {
        count = 1;
        for(j=i+1; j<len; j++)
        {
            if(str[i] == str[j])
            {
                str[j] = '\0';
                freq_arr[j] = 0;
                count++;
            }
            
        }
        if(freq_arr[i] == -1)
        freq_arr[i] = count;
    }
    
}
