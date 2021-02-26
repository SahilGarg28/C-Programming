#include <stdio.h>
#include<math.h>

int main()
{
int n,i,flag=1;
printf("Enter any number: ");
scanf("%d",&n);

for(i=2;i<=sqrt(n);i++)
{
    n=n%i;
    if(n==0)
    flag=0;
}

if(flag==0)
printf("Not prime");
else
printf("Prime");

return 0;
}
