#include <stdio.h>
int main()
{
    int i = 1, n;
    printf("how many no.'s you want to print ? \n");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("%d\t", i);
        i++;
    }
    return 0;
}
