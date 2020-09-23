#include <stdio.h>
int main()
{
    int a;
    printf("Enter your Age ");
    scanf("%d",&a);
    if(a>=18)
    {
        printf("You are eligible for vote");
    }
    else
    {
        printf("you are not eligible for vote");
    }
    return 0;
}
