#include <stdio.h>
    void main()
    {
int a[3][3];
	int i = 0, j = 0;
 
	printf ("Enter the elements of the matrix\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			scanf ("%d", &a[i][j]);
		}
	}
long determinant = a[0][0] * ((a[1][1]*a[2][2]) - (a[2][1]*a[1][2])) -a[0][1] * (a[1][0]
   * a[2][2] - a[2][0] * a[1][2]) + a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);
 
     printf("\nDeterminant of 3X3 matrix: %ld", determinant);

    }