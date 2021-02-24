#include<stdio.h>
int main(){
 int num;
 scanf("%d",&num);
 if(num%5==0){
    printf("%d\n",num/5);
 }else{
    printf("%d\n",(num/5)+1);
 }
 
return 0;
}
