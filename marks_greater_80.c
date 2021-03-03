#include<stdio.h>
int main()
{
      int n,i,count1=0,count2=0;
      
      printf("Enter N: ");
      scanf("%d",&n);
      int s[n];
      for(i=0;i<n;i++)
      {
            printf("Enter Marks: ");
            scanf("%d",&s[i]);
      }
      for(i=0;i<n;i++)
      {
            if(s[i]>=80)
            count1++;
            else
            if(s[i]>60&&s[i]<70)
            count2++;
      }
      printf("Student got>=80 is %d",count1);
      printf("Student got b/w 60and 70 is %d",count2);
      
      return 0;
}
