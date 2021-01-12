#include<stdio.h>
#include<string.h>
int main(){
    int i,x=0,y=0;
char ch[]="hello";
char ch2[1001];
scanf("%s",ch2);
 
for(i=0;i<strlen(ch2);i++){
   if(ch2[i]==ch[x]){
    x++;
    y++;
   }
 
   if(x==5){
    break;
   }
}
if(y==5){
    printf("YES\n");
 
}else{
    printf("NO\n");
}
 
 
return 0;
}
