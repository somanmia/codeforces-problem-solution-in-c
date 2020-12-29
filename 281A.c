#include<stdio.h>
#include<string.h>
int main(){
char ch[1001];
scanf("%s",ch);
  if(ch[0]>=65 && ch[0]<=91){
        printf("%c",ch[0]);
    }else{
        printf("%c",ch[0]-32);
    }
for(int i=1;i<strlen(ch);i++){
 
printf("%c",ch[i]);
 
}
printf("\n");
 
return 0;
}
