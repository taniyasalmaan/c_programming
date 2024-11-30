#include<stdio.h>
void main(){
int n,*arr,i;
//int *ptr = (int *)malloc(sizeof(int));
clrscr();
printf("enter size of array:");
scanf("%d",&n);

arr = (int *)malloc(sizeof(int));
for(i = 0;i < n;i++){
arr[i]=i+1;
}
printf("array:");
for(i = 0;i<n;i++){
printf("%d\t ",arr[i]);
}
free(arr);
}