#include <stdio.h>

int main()
{
    char name1[20],name2[20];
    int i;
    printf("enter name: ");
    gets(name1);
    for(i=0;name1[i]!='\0';i++)
    {
        name2[i]=name1[i];
    }
    name2[i]='\0';
    printf("Copied name is: ");
    puts(name2);

    return 0;
}
