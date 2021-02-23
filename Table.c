//Table of n
#include<stdio.h>
int main()
{
    int n,c;
    printf ("Enter n: ");
    scanf("%d",&n);
    
    for(c=1;c<=10;c++)
    printf("\n%d x %d = %d",n,c,n*c);
    
    return 0;
}
