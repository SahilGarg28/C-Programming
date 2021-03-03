#include <stdio.h>

int main()
{
    int start,end,n,year,i,sum=0;
    int m[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    
    printf("Enter year: ");
    scanf("%d",&year);
    
    (year%4==0&&year%100==0||year%400==0?m[1]=29:m[1]);
    
    printf("Enter start month: ");
    scanf("%d",&start);
    
    printf("Enter end month: ");
    scanf("%d",&end);
    
    for(i=start-1;i<end;i++)
    {
          printf("%d+",m[i]);
          sum=sum+m[i];
    }
    printf("\b= %d",sum);
    
    return 0;
}
