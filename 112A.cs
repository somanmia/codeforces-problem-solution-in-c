#include<stdio.h>
#include<string.h>
int main(){
 char ch[101],ch2[101];
 scanf("%s %s",ch,ch2);
 strupr(ch);
 strupr(ch2);
if(strcmp(ch,ch2)==0){
    printf("0\n");
}else if(strcmp(ch,ch2)>0){
    printf("1\n");
}else{
printf("-1\n");
       }
return 0;
}
