#include<stdio.h>
int linearsearch(int arr[],int target);
int main(){
int n=0,sum=0,target=5;;
int arr[]={1,3,5,7,9,11};
int x=linearsearch(arr,target);
if(x==-1){    printf("\n element does not exist \n");}
else{
printf(" Target element is present at: %d",x);    }
return 0;
}
int linearsearch(int arr[],int target){
    for(int i=0;i<6;i++){
        if(arr[i]==target){
            return i;       }}
             return -1;
             }