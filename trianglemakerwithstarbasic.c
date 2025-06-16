#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,i,j,k;

    printf("Hello , I am a triangle maker , please you write a number for your triangle edge: ");
    scanf("%d",&number);
    for (i=1;i<=number;i++){
         for (j=1;j<=number-i;j++){
            printf(" ");


         }
         for (k=1;k<=i;k++){
            printf("* ");

         }

    printf("\n");

    }






    return 0;
}
