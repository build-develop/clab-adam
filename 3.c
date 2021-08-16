#include<stdio.h>
void main()
{
	int i,j,count=0,k,b,sum,fact,num1,num2;
    printf("enter the range");
  scanf("%d %d", &num1, &num2);
  //printing krishnamurthy number between num1 and num2(as its mentioned range in qn)
	for(i=num1+1;i<num2;i++)
	{
		sum=0;
		for(j=i;j>0;j=j/10)
		{       fact=1;
			b=j%10;
			for(k=1;k<=b;k++)
			{
				fact=fact*k;
			}
			sum=sum+fact;
		}
		if(sum==i)
		{			count++;
			printf("Krishnamurti no is: =%d \n",sum);
		}}}