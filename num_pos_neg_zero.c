#include <stdio.h>

int main()
{
    int a;
    printf("Enter your no. ");
    scanf("%d",&a);
    
    if(a>0)
    {
        printf("%d is positive no.",a);
    }
    else
    {
        if(a<0)
        {
            printf("%d is negative no.",a);
        }
        else
        {
            if(a==0)
            {
                printf("Your input number is zero");
            }
            
        }
    }
    
}
