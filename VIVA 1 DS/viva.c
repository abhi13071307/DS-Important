#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter Length: ");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Value Is Negative\n");
    }
    else
    {
        for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1||j==1||i==n||j==n)
            {
                printf("4 ");
            }
            else if(i==2||j==2||j==n-1||i==n-1)
            {
                printf("3 ");
            }
            else if(i==3||j==3||j==n-2||i==n-2)
            {
                printf("2 ");
            }
            else{
                printf("1 ");
            }
        } 
        printf("\n");
    }
    }
    return 0;
}