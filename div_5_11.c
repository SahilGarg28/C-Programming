#include <stdio.h>
int main()
{
    int a;
    printf("enter your value ");
    scanf("%d",&a);
    if(a%5==0 && a%11==0)
    {
    printf("your value is divisible by both 5 and 11");
    }
    else
    {
    if(a%5==0)
    {
        printf("%d is divisible by 5",a);
    }
    else
    {
        if(a%11==0)
        {
            printf("%d is divisible by 11",a);
        }
        else
        {
        printf("your value is not divisible by 5 and 11");
            
        }
        }
    }
    return 0;
}
