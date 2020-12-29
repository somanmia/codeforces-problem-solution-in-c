#include<stdio.h>
#include<string.h>
int main(){
  char ch[101];
  int temp;
  scanf("%s",ch);
  int len=strlen(ch);
  for(int i=0;i<len;i++){
     for(int j=0;j<len-1;j++){
       if(ch[j]>ch[j+1]){
          temp=ch[j];
          ch[j]=ch[j+1];
          ch[j+1]=temp;
       }
     }
  }
 
  int count=0;
  for(int i=0;i<len;i++){
       if(ch[i]!=ch[i+1]){
          count++;
       }
  }
if(count%2==0){
    printf("CHAT WITH HER!\n");
}else{
  printf("IGNORE HIM!\n");
}
 
 
return 0;
}
