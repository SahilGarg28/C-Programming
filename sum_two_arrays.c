#include<stdio.h>
int main()
{
    int n,i;
    
    printf("Enter N: ");
    scanf("%d",&n);
    
    int A[n],B[n];
    
    for(i=0;i<n;i++)
    {
        printf("Enter value at A[%d]: ",i);
        scanf("%d",&A[i]);
    }
    printf("************************\n");
    for(i=0;i<n;i++)
    {
        printf("Enter value at B[%d]: ",i);
        scanf("%d",&B[i]);
    }
    printf("************************");
    printf("\n************************");
    printf("\nSum of two array is: ");
    for(i=0;i<n;i++)
    {
        printf("\nC[%d]: %d",i,A[i]+B[i]);
    }
    
    return 0;
}
