#include<stdio.h>
int main(){
FILE *file;
char data[500];
int lines=0;
char ch;
clrscr();
printf("enter a line to append:\n");
gets(data);

file = fopen("lines.txt","rt");
if(file == NULL){
printf("error opening the file.\n");
return 1;

}
while((ch = fgetc(file))!=EOF){
putchar(ch);
if(ch == '\n'){
lines++;
}
}
fclose(file);
printf("total number of lines: %d\n",lines + 1);
return 0;
}