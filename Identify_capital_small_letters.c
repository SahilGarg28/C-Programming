#include <stdio.h>
int main()

{
    char b;
    printf("write your letter ");
    scanf("%c",&b);
    int d=b;
    
    if(65<=d&&d<=90)
    {
        printf("your letter (%c) is 'CAPITAL'",d);
    }
    else
    {
        if(97<=d&&d<=122)
        {
        printf("your letter (%c) is 'small'",d);
        }
        else
        {
            printf("you type any another symbol other than alphabets");
        }
    }
    return 0;
}
