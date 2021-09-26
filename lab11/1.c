#include <stdio.h>
 #include <string.h>
 
void main(){
    char x[100];
    int count=0;
    printf("enter a sentence\t");
    gets(x);
for(int i=0;i<strlen(x);i++){
if(x[i]==' '){
    count++;
}
}
printf("\nNumber of white spaces is: %ld",count);
}