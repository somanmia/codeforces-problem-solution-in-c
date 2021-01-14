
#include<stdio.h>
#include<string.h>
int main(){
    int count=0,i;
char ch[100];
scanf("%s",ch);
 
for(i=0;i<strlen(ch);i++){
    if(ch[i]=='7' || ch[i]=='4'){
        count++;
    }
}
if(count==7 || count==4){
    printf("YES\n");
}else{
    printf("NO\n");
}
 
 
return 0;
}
