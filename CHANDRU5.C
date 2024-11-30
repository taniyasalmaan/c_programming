#include<stdio.h>
int main (){
int num1,num2,num3,largest;
printf("enter first number ");
scanf("%d",&num1);

printf("enter second number ");
scanf("%d",&num2);

printf("enter third number ");
scanf("%d",&num3);

if(num1 > num2){
      if(num2 > num3){
		 largest = num1;
      }else{
		 largest = num3;
      }
}else{
       if (num2 > num3){
		 largest = num2;
       }else{
		 largest = num3;
		 }
       }
       printf("the largest number is:%d\n",largest);
       return 0;

}
