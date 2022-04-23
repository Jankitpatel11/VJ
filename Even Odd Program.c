#include<stdio.h>

void main()
{
   int n;

   printf("Please Enter The Number: ");
   scanf("%d",&n);

   if(n%2 == 0)
   {
       printf("\nThe Number %d Is Even Number",n);

   }
else
{
    printf("\nThe Number %d Is Odd Number",n);
}
}
