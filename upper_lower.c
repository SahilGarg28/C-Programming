#include <stdio.h>

int main()
{
    char name[20];
    int i;
    printf("enter any name: ");
    gets(name);
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]>=65&&name[i]<=90)
        {
            name[i]=name[i]+32;
        }
    }
    puts(name);

    return 0;
}

