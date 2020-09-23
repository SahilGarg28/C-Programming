#include <stdio.h>
int main()
{
    char a;
    printf("Type the letter which you want to convert ");
    scanf("%c",&a);
    
    if(a>65&&a<90)
    {
        int b;
        b=32+a;
        printf("converted letter is %c",b);
    }
    else
    {
        if(a>97&&a<122)
        {
            int b;
            b=a-32;
            printf("converted letter is %c",b);
        }
        else
        {
            printf("Please write only alphabet.");
        }
    }
    return 0;
}
