#include <stdio.h>
int main (){
int marks;
printf("enter the marks:");
scanf("%d",&marks);
if (marks >=90){
printf("grade A\n");
}else if(marks >= 75){
printf("grade B\n");
}else if (marks >= 60){
printf("grade C\n");
}else {
       printf("better love next time ");
}
return 0;
}



