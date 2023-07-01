#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{

    int first;
    int second;
    int third;
    int fourth;
    int sum;
    int product;

    printf("Enter any four digit number: ");
    scanf("%d",&first);
    scanf("%d",&second);
    scanf("%d",&third);
    scanf("%d",&fourth);


    sum = first + fourth;
    product = second * third;

    printf("Sum of first and last digit (%d + %d) = %d",first,fourth,sum);
    printf("Product of mid digit (%d * %d) = %d",second,third,product);



    return 0;
}
