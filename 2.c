#include <stdio.h>
int main()
{   int num1, num2, flag, i, j;
    printf("Enter two range:");
  scanf("%d %d", &num1, &num2); 
    printf("prime numbers are: \n");
   for(i=num1+1; i<num2; ++i)
   {      flag=0;
      for(j=2; j<=i/2; ++j)
      {         if(i%j==0)
         { flag=1;   }
      }
      if(flag==0)
         printf("%d\n",i);
  }
  return 0;
}