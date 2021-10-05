#include<stdio.h>  
int getinch(int);
int getcm(int);
int main()   
{  
int feet;
printf("Enter the feet ");
scanf("%d",&feet);  
getinch(feet);
}  

int getinch(int fe){
double Inch;  
Inch = 12 * fe;  
getcm(Inch);
return 0; 
}

int getcm(int in){
double centimeter;  
centimeter = 2.54 * in;  
printf ("Value in Centimeter is: %.2f \n", centimeter);   
return 0;  
}