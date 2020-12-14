#include <stdio.h>

int main()
{
    int h,i,j;
    printf("Enter height of the hourglass: ");
    do
    {
        scanf("%d",&h);
        if(h %2 == 0)
            printf("You should enter an odd number!\nEnter height of the hourglass: ");
    }
    while(h % 2 == 0);
    for(i=0; i<=(h-1)/2; i++)
    {
        for(j=0; j<i; j++)
            printf(" ");
        for(j=h-2*i; j>0; j--)
            printf("*");
        printf("\n");
    }
    for(i=1; i<=((h-1)/2); i++)
    {
        for(j=(h-1)/2-i; j>0; j--)
            printf(" ");
        for(j=0; j<2*i+1; j++)
            printf("*");
        printf("\n");
    }
}

