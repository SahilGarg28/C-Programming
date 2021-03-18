#include <stdio.h>

int main()
{
    char word1[20];
    int i,vo=0;
    printf("Input any word: ");
    gets(word1);
    for(i=0;word1[i]!='\0';i++)
    {
        switch(word1[i])
        {
            case 'a':case'e':case'i':case'o':case'u':case 'A':case'E':case'I':case'O':case'U':
            vo++;
            break;
        }
    }
    printf("Number of vowels found: %d \nLength of string is %d",vo,i);

    return 0;
}
