#include<stdio.h>
int main(){
int a,b,limak,bob,count=0;
scanf("%d %d",&a,&b);
if(a<=b){
        limak=a*3;
    bob=b*2;
while(1){
    count++;
    if(limak>bob){
        break;
     }
     limak=limak*3;
     bob=bob*2;
 
 
}
printf("%d\n",count);
 
}else{
  printf("%d\n",count);
}
return 0;
}
