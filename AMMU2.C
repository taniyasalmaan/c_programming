#include<stdio.h>
int main(){
int i;
char array[3][10]={"HI","HELLO","XYZ"};
printf("string array elements are:\n");

for(i = 0;i < 3; i++){
printf("%s\n",array[i]);
}
 return 0;
  }