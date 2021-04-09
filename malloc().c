#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i;
    printf("Enter size of dynamic memory: ");
    scanf("%d",&n);
    int *ptr=malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory does not allocated\n");
    }
    else{
        printf("memory successfully allocated\n");

        for(i=0;i<n;i++)
        {
            ptr[i]=i+1;
        }
        for(i=0;i<n;i++)
        {
            printf("%d\n",ptr[i]);
        }
        }
}
