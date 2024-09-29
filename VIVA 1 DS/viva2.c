#include<stdio.h>
int main()
{
    int green=0,purple=0,part=5,first,second,i,ppurple=0,pgreen;
    printf("Number Of Participants: 5\n");
    printf("Cost Of Green Balloon: 5rs\n");
    printf("Cost Of Purple balloon: 2rs\n");
    printf("5 2\n");
    for(i=0;i<5;i++)
    {
        scanf("%d", &first);
        scanf("%d \n", &second);
        if(first==1)
        {
            green++;
        }
        else if(first==0)
        {
            green=green;
        }
        if(second==1)
        {
            purple++;
        }
    }
    printf("\ngreen ballons: %d" ,green);
    printf("\nPurple Balloons: %d", purple);
    pgreen=green*5;
    ppurple=purple*2;
    printf("\nTotal green ballons Price: %d Rs" ,pgreen);
    printf("\nTotal Purple ballons Price: %d Rs" ,ppurple);

    return 0;
}
