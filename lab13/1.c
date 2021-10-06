#include<stdio.h>

// recursive function to find factorial of a number
int fact(int n) 
{
     if(n!=0)
         return n*fact(n-1); // general case
     else
         return 1; // base case
}
void main()
{
 int n,r,npr;
 
printf("Enter a number n\n");
scanf("%d",&n);
printf("Enter a number r\n");
scanf("%d",&r);
npr=fact(n)/fact(n-r);
printf("Value of %dP%d = %d\n",n,r,npr);
}