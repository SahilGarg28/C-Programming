#include<stdio.h>
#include<math.h>

int main()
{
    int n,l,digit=0,i,i1,i2,sum=0,count=0;
    
    printf("Enter N: ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        digit=0;
        sum=0;
        i1=i;
        while(i1!=0)
        {
            i1=i1/10;
            digit++;
        }
        i2=i;
        while(i2!=0)
        {
            l=i2%10;
            sum =sum+pow(l,digit);
            i2=i2/10;
        }
        if(sum==i)
        {
            printf("\nArmstrong: %d",i);
            count++;
        }
        
    }
    printf("\nNumber of Armstrong no.'s from 1 to %d is = %d",n,count);
    return 0;
}
