#include<stdio.h>
int main(){
int N,x,y,z;
scanf("%d",&N);
int win=0;
while(N--){
    scanf("%d %d %d",&x,&y,&z);
   if((x==1 && y==1) || (x==1 && y==1 && z==1) || (y==1 && z==1) ||(z==1 && x==1)){
    win++;
   }
}
printf("%d\n",win);
 
 
return 0;
}
