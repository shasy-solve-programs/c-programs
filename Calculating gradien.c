#include<stdio.h>
int main()
{
    while (1 == 1)
    {
        int x1;
        int x2;
        int y1;
        int y2;
        printf("Enter your values of X1 and Y1\n");
        printf("  x1 = ");
        scanf("%d",&x1);
        printf("  y1 = ");
        scanf("%d",&y1);
        printf("Enter your values of X2 and Y2\n");
        printf("  x2 = ");
        scanf("%d",&x2);
        printf("  y2 = ");
        scanf("%d",&y2);

        int grad;
        grad = (y2 - y1) / (x2 - x1);
        printf("Your gradien is = %d\n\n",grad);

        printf("This program was created by SHASY\n");
        printf("I hope it was helpful\n");
        printf("-------------------------------------------\n\n");

        printf("To calculate another gradien, enter any number: ");

        scanf("%d",&y2);
    }
}
