#include<stdio.h>
void main()
{
    int r,t,c;
    for(r=1;r<=4;r++)
    {
    for(t=3;t>=r;t--)
    {
        printf("*\t");
    }
    for(c=1;c<=r;c++)
    {
        printf("%d\t",c);
    }
    printf("\n");
    }
}
