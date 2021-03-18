#include <stdio.h>

int main()
{
    char name[20],temp[20];
    int i,i1;
    printf("Enter name: ");//sahil
    gets(name);
    for(i1=0;name[i1]!='\0';i1++);
    for(i=0;name[i]!='\0';i++)
    {
        temp[i]=name[i1-1];
        i1--;
    }
    temp[i]='\0';
    for(i=0;temp[i]!='\0';i++)
    {
        name[i]=temp[i];
    }
    puts(name);
    

    return 0;
}
