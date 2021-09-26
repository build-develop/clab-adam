#include <stdio.h>
 
int main (void)
{
	int a[10][10];
	int i = 0, j = 0, row = 0, col = 0;
 
	printf ("Enter the order of the matrix (mxn):\n");
	printf ("where m = number of rows; and\n");
	printf ("      n = number of columns\n");
	scanf ("%d %d", &row, &col);
 
	int flag = 0;
 
	printf ("Enter the elements of the matrix\n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			scanf ("%d", &a[i][j]);
		}
	}
 int x=1;
	for(int p=0;p<row&&x;p++){
        for(int q=0;q<col;q++){
if(a[p][q]!=a[q][p]){x=0; break;}
        }
    }
    if(x==0){printf("it is not symmetric");}
    else{printf("it is symmetric");}
	return 0;
}