#include <stdio.h>

int main()
{
    int m,n,r,c,i;
    printf("Enter rows of matrix: ");
    scanf("%d",&m);
    
    printf("Enter columns of matrix: ");
    scanf("%d",&n);
    
    int A[m][n],B[m][n];
    
    for(i=1;i<=2;i++)
    {
        if(i==1)
        printf("\n----------Input values of first matrix----------\n");
        else
        printf("\n----------Input values of second matrix----------\n");
        for(r=0;r<m;r++)
        {
            for(c=0;c<n;c++)
            {
                printf("Enter value at %d,%d index :",r,c);
                if(i==1)
                scanf("%d",&A[r][c]);
                else
                scanf("%d",&B[r][c]);
            }
        }
    }
    
    printf("\nResultant matrix of order %dx%d is:\n\n",m,n);
    
    for(r=0;r<m;r++)
    {
        for(c=0;c<n;c++)
        {
            printf("%d\t",A[r][c]+B[r][c]);
        }
        printf("\n");
    }
    return 0;
}
