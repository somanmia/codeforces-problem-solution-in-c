#include<stdio.h>
#include<string.h>
int main(){
char ch[1001];
int N,len;
scanf("%d",&N);
while(N--){
     scanf("%s",ch);
     len=strlen(ch);
     if(len>10){
     printf("%c%d%c\n",ch[0],len-2,ch[len-1]);
     }else if(len<=10){
          printf("%s\n",ch);
     }
}
 
return 0;
}
