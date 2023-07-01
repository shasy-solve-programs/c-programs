#include<stdio.h>
#include<math.h>
int main()
{

    printf("*****************************************\n");
    printf("    WELCOME TO 'SHASY SOLVE PROGRAMS'\n");
    printf("*****************************************\n\n");

    while (1 == 1)
    {
        int num;
        int solu;

        printf("--------------------------------------------------------------\n");
        printf("'     This program is to check if the number you have entered\n");
        printf("is an ODD or EVEN number  '\n");
        printf("---------------------------------------------------------------\n\n");
        printf("        Enter any number: ");
        scanf("%d",&num);
        solu = num % 2;

        if (solu == 0)
        {
            printf("           SOLUTION\n");
            printf("    -------------------------\n");
            printf("      %d is an EVEN number\n",num);
            printf("    -------------------------\n\n");

        }


        else
        {

            printf("           SOLUTION\n");
            printf("   -------------------------\n");
            printf("     %d is an ODD number\n",num);
            printf("   -------------------------\n\n");

        }
        printf("**************************************************************************\n\n\n");

    }



    return 0;
}
