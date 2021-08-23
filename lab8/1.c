#include<stdio.h>
int main(){
int n=0,sum=0;
printf("Enter size of array \n");
scanf("%d",&n);
int a[n];
printf("\n Enter values of the array \n");
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    sum+=a[i];
}
double avg=sum/(n*1.0);
printf("\n the average is: %lf ",avg);



    return 0;
}