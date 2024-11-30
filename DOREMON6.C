#include<stdio.h>
void main(){
int i;
int *arr = (int *)calloc(5, sizeof(int));
clrscr();
if(arr == NULL){
printf("arr allocation failed\n");
return;
}
for(i = 0;i<3;i++){
arr[i] = i + 1;
}
arr = (int *)realloc(arr, 5 * sizeof(int));
for(i = 3;i<5;i++){
arr[i] =i + 1;
}
printf("resize array :\n");
for(i = 0;i < 5;i++){
printf("%d\t",arr[i]);
}
free(arr);
}