#include <stdio.h>
#include <stdio.h>
#include <stdio.h>
#include <stdio.h>
void main()
{
    int size = 0;
    int i;

    printf("Enter size of the array : ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements in array : ");
    for (i = 0; i < size; i++)
    {       scanf("%d", &arr[i]);
    }    int temp = 0;
    int x = 0;
    for (int k = 0; k < size; k++)
    {        x = 0;
        for (int j = 1; j < size - k; j++)        {
            if (arr[j] < arr[j - 1])            {                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
                x = 1;            }        }
        if(x==0){break;}    }

    for (int y = 0; y < size; y++)
    {
        printf("%d \t", arr[y]);
    }
}
