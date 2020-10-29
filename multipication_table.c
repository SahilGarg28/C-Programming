//lecture8-ex1-2nd-method.c
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the number you want multipication table of: ");
    scanf("%d",&a);
     printf("Table of %d:\n",a);
    for(b=1;b<=10;b++)
    {
    printf("%dx%d=%d\n",a,b,a*b);
    }
return 0;
}
