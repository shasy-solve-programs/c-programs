#include<stdio.h>
#include<math.h>
int main()
{


    printf("*****************************************\n");
    printf("    WELCOME TO 'SHASY SOLVE PROGRAMS'\n");
    printf("*****************************************\n\n");


    printf("This program is to calculate the sum of square of THREE numbers\n");
    printf("-----------------------------------------------------------------\n\n");
    int num1;
    int num2;
    int num3;
    int square1;
    int square2;
    int square3;
    int solu;


    while (1 == 1)
    {
        printf("     Enter any three numbers\n");
        printf("         number1: ");
        scanf("%d",&num1);
        printf("         number2: ");
        scanf("%d",&num2);
        printf("         number3: ");
        scanf("%d",&num3);


        square1 = num1 * num1;
        square2 = num2 * num2;
        square3 = num3 * num3;
        solu = square1 + square2 + square3;

        printf("           SOLUTION\n");
        printf("     Sum of their squares = %d\n",solu);
        printf("********************************************\n\n\n");

    }

    return 0;
}
