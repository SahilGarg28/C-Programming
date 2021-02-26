#include <stdio.h>

int main()
{
    int n,n1,l,i,f=1;
    
    printf("Enter N: ");
    scanf("%d",&n);
    
    n1=n;
    while(n1!=0)
    {
        l=n1%10;
        for(i=1;i<=l;i++)
        {
            f=f*i;
        }
        printf("%d! = %d\n",l,f);
        n1=n1/10;
        f=1;
    }
    return 0;
}
