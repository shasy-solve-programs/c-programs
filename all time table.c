#include<stdio.h>
int main()
{
    printf("                     **************************************\n");
    printf("                         WELCOME TO 'SHASY SOLVE PROGRAMS'\n");
    printf("                     **************************************\n");
    while(1==1)
    {
        int a,b,c,d;
        printf("\n                          Enter your time table: ");
        scanf("%d",&a);
        printf("\n                          Where should it start: ");
        scanf("%d",&c);
        printf("\n                          Where should it end: ");
        scanf("%d",&d);
        if (c<=d)
        {
            for(b=c; b<=d; b++)
            {
                printf("        ");
                printf("                          %d x %d = %d\n",a,b,a*b);
            }
            printf("            -----------------------------------------------------------------");
        }
        else
        {
            printf("\n\n                   we couldn't print the time table for %d because, the start (%d) cannot be greater than the end (%d)",a,c,d);
            printf("                -----------------------------------------------------------------------------------------------------------");

        }
            printf("                                                         ");
            printf("                                                         ");
    }


}

