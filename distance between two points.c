#include<stdio.h>
#include<math.h>
int main()
{
    int d;

    printf("   **************************************\n");
    printf("      WELCOME TO 'SHASY SOLVE PROGRAMS'\n");
    printf("   **************************************\n\n\n");
    printf("This Program Is To Find 'The Distance Between Two Points'\n");
    printf("To find The Distance Between Two Points,\n\n");
    while (1 == 1)
    {

        float x1;
        float x2;
        float y1;
        float y2;
        float s1;
        float s2;
        float ans;

        printf("PLEASE, enter your values of X:\n");
        printf("  X1: ");
        scanf("%f",&x1);
        printf("  X2: ");
        scanf("%f",&x2);
        printf("PLEASE, enter your values of Y:\n");
        printf("  Y1: ");
        scanf("%f",&y1);
        printf("  Y2: ");
        scanf("%f",&y2);

        s2 = (x2 - x1)*(x2 - x1);
        s1 = (y2 - y1)*(y2 - y1);

        ans = sqrt(s2 + s1);
        printf("This is how your coordinate looks like: (%f , %f) and (%f , %f)\n",x2,x1,y2,y1);

        printf("  SOLUTION\n");
        printf("The Distance Between The Two Points is = %f\n\n",ans);

        //printf("This Program Was Created By 'SHANAS'\n");
        //printf("**********************************************\n\n\n");

        //}
        printf("Do you want an explanation to your answer? \n ");
        printf("Choice either a 'YES(1) or a NO(0)'\n");
        printf("PLEASE, enter '1 to see' and '0 not to see' : ");
        scanf("%d",&d);


        if (d == 1)
        {

            printf("*****************************************************\n");
            printf("WELCOME, this is the explanation to your solution\n");
            printf("*****************************************************\n\n");
            printf("to calculate the distance between two points of your problem,\n");
            printf("we need your values of X1,X2,Y1,Y2\n");
            printf("  - SO, your values are: %f , %f , %f , %f\n",x1,x2,y1,y2);
            printf("                    ******************************\n");
            printf("Using the fomular : sqrt(X2 - X1)^2 + (Y2 - Y1)^2\n");
            printf("                    ******************************\n\n");
        }



        else
        {

            printf("Sorry, you can't have the explanation to your solution\n");
            printf("This Program Was Created By 'SHANAS'\n");
            printf("**********************************************\n\n\n");
        }




        printf("PLEASE, Do you want to continue? \n ");
        printf("If YES 'press 1' , If NO 'press 0'\n");
        printf("     **************************\n");
        printf("          SO, 1 OR 0:\n ");
        printf("     ***************************\n");
        printf("What Is Your Choice? : ");
        scanf("%d",&d);


        if (d == 1)
        {

            printf("So, we first find (X2 - X1)^2 => (%f - %f)^2\n",x2,x1);
            printf("Then, (%f - %f)^2 = %f\n",x2,x1,s2);
            printf("So, we now find (Y2 - Y1)^2 => (%f - %f)^2\n",y2,y1);
            printf("Then, (%f - %f)^2 = %f\n",y2,y1,s1);
            float solu;
            solu = s2 + s1;
            printf("                    *******************************************\n");
            printf("We are going to add (X2 - X1)^2 and Y2 - Y1)^2 => %f + %f = %f\n",s2,s1,solu);
            printf("                    *******************************************\n");

            printf("Then we look for the sqrt of s2 and s1\n");
            printf("So, sqrt(s2 + s1) => sqrt(%f)\n",solu);
            printf("                     *********\n");
            float fin;
            fin = sqrt(solu);
            printf("*******************************************************\n");
            printf("That is why we had 'The Distance Between The Two Points' to be =  %f\n",fin);
            printf("*******************************************************\n");
            printf("This Program Was Created By 'SHANAS'\n");
            printf("*********************************************************************\n\n\n\n");
        }


        else
        {

            printf("*************************************\n");
            printf("Thanks, Your Choice Can't continue\n");
            printf("*************************************\n");
            printf("This Program Was Created By 'SHANAS'\n");
            printf("*********************************************************************\n\n\n");

        }
    }

    return 0;
}
