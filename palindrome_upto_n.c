#include <stdio.h>
int main()
{
int n,i1,i=11,rev=0,l,count=0;

printf("Enter N: ");
scanf("%d",&n);

while(i<=n)
{
    i1=i;
    while(i1!=0)
    {
        l=i1%10;
        
        rev=rev*10+l;
        
        i1=i1/10;
    }
    if(rev==i)
    {
        printf("\nPallindrome : %d",rev);
        count++;
    }
    i++;
    rev=0;
}
printf("\nPallindrome numbers found : %d",count);
return 0;
}
