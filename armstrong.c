#include<stdio.h>
#include<math.h>

int main()
{
    int n,n1,r,sum=0;
    
    printf("Enter n:");
    scanf("%d",&n);
    
    n1=n;
    while(n1!=0)
    {
        r=n1%10;
        sum=sum+pow(r,3);
        n1=n1/10;
    }
    if(sum==n)
    printf("\n%d is armstrong number",n);
    else
    printf("\n%d is not armstrong number",n);
    return 0;
}
