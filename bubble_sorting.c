#include <stdio.h>

int main()
{
    int n,c,r,temp,i;
    
    printf("Enter N: ");
    scanf("%d",&n);
    
    int S[n];
    for(i=0;i<n;i++)
    {
          printf("Enter salary: ");
          scanf("%d",&S[i]);
    }
    for(r=0;r<n;r++)
    {
          for(c=0;c<n-1-r;c++)
          {
                if(S[c]>S[c+1])
                {
                      temp=S[c];
                      S[c]=S[c+1];
                      S[c+1]=temp;
                }
          }
    }
    printf("\nSorted array: \n");
    for(i=0;i<n;i++)
    {
          printf("%d\n",S[i]);
    }

    return 0;
}
