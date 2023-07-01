#include<stdio.h>
int main()
{
    while(1 == 1)
    {
        int x1;
        int x2;
        int y1;
        int y2;
        printf("Enter your values of X\n");
        printf("x1= ");
        scanf("%d",&x1);
        printf("x2= ");
        scanf("%d",&x2);
        printf("Enter your values of Y\n");
        printf("y1 ");
        scanf("%d",&y1);
        printf("y2 ");
        scanf("%d",&y2);

        int midpoint1;
        int midpoint2;
        midpoint1 = (x1 + x2)/2;
        midpoint2 = (y1 + y2)/2;
        printf("Your midpoint is (%d,%d)\n\n\n",midpoint1,midpoint2);

        printf("  ~ This program was created by SHASY\n");

        printf("------------------------------------------------------");


        scanf("%d",&x2);
    }

}
