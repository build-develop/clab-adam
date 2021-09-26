#include<stdio.h>
int main(){
int n=0;
printf("Enter size of array \n");
scanf("%d",&n);
int a[n];
printf("\n Enter values of the array \n");
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);  }
int min=__INT_MAX__,max=a[0];
for(int j=0;j<n;j++){
    if(a[j]>max){
        max=a[j];    }
    else if(a[j]<min){
        min=a[j];    }}
printf("\n Largest element is : %d",max);
printf("\n smallest element is : %d",min);
    return 0;
}