#include<stdio.h>
int main(){
   int num,reverse_number;

   //User would input the number
   printf("\nEnter any number:");
   scanf("%d",&num);

   //Calling user defined function to perform reverse
   reverse_number=reverse_function(num);
   printf("\nAfter reverse the no is :%d",reverse_number);
   return 0;
}
int sum=0,rem;
reverse_function(int num){
   if(num){
      rem=num%10;
      sum=sum*10+rem;
      reverse_function(num/10);
   }
   else
      return sum;
   return sum;
}


/**
 * Recursive function to find reverse of any number
 */
int reverse(int num)
{
    // Find total digits in num
    int digit = (int) log10(num);
    
    // Base condition
    if(num == 0)
        return 0;
    
    return ((num%10 * pow(10, digit)) + reverse(num/10));
}
