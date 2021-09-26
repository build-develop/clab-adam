#include <stdio.h>
    void main()
    {
int a[3][3];
	int i = 0, j = 0,rowsum=0,colsum=0,diagsum=0;
 
	printf ("Enter the elements of the matrix\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			scanf ("%d", &a[i][j]);
		}
	}
for(int p=0;p<2;p++){
    for(int q=0;q<2;q++){
rowsum+=a[p][q];
    }printf("Row %d sum:%d \n",p+1,rowsum);
    rowsum=0;
}

for(int p=0;p<2;p++){
    for(int q=0;q<2;q++){
colsum+=a[q][p];
    }printf("Column %d sum:%d \n",p+1,colsum);
    colsum=0;
}

diagsum=a[0][0]+a[1][1];

printf("diagonal sum is: %d",diagsum);
    }