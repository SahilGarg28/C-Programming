#include<stdio.h>
int main()
{
      int i,n,sum=0;
      printf("Enter N: ");
      scanf("%d",&n);
      
      int s[n];
      for(i=0;i<n;i++)
      {
            printf("Enter salry of %d person: ",i+1);
            scanf("%d",&s[i]);
      }
      for(i=0;i<n;i++)
      {
            sum=sum+s[i];
      }
      
      printf("Total price of products is = %d",sum);
      printf("\nAverage price of products is = %d",sum/n);
      
      return 0;
}
