#include<stdio.h>
int main(){
int T,num,temp,ck;
scanf("%d %d",&num,&T);
temp=num;
while(T--){
   num=temp;
   ck=num%10;
   if(ck==0){
      temp=num/10;
   }else{
     temp--;
   }
 
}
printf("%d\n",temp);
 
 
 
 
return 0;}
