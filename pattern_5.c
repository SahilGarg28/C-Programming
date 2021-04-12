/*
40 30 20 10
40 30 20 10
40 30 20 10
40 30 20 10
*/
int main()
{
    int r,c;
    for(r=1;r<=4;r++)
    {
        for(c=40;c>=10;c-=10)
        {
            printf("%d ",c);
        }
        printf("\n");
    }
}
