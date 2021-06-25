#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ex_rate_into_vnd = 20000; //! Exchange Rate
    int beer = 7000; //! Local price of a beer
    float in_c = 0; //! Input amount of money
    float out_c = 2; //! Amount of currency to exchange !
    float choice; //! Switch mode
    char buy; //! Deal or not

    //! Introduction
    printf ("||---------------------------------------------------||\n");
    printf ("||         Currency Exchange Machine  beta           ||\n");
    printf ("||---------------------------------------------------||\n");

    printf ("Please choose your option:\n");
    printf("\t 1.Exchange VND to dollar\n");
    printf("\t 2.Exchange Dollar to VND\n");

    do
    {
        printf("Your choice: ",choice);
        scanf("%f",&choice);
    } while( choice != 1 && choice != 2);

    printf ("Please enter amount of money:");
    scanf("%f",&in_c);

    if (choice == 1 )
        {
            out_c = in_c / ex_rate_into_vnd;
            printf ("Your amount of money: %.2f",out_c);
        }
    else
        {
           out_c = in_c * ex_rate_into_vnd;
           printf ("Your amount of money: %.0f",out_c);
        }
}