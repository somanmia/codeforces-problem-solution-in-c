#include<stdio.h>
int main(){
int T,hour,min,total_min,duration;
scanf("%d",&T);
while(T--){
    scanf("%d %d",&hour,&min);
    total_min=hour*60+min;
    duration=(24*60)-total_min;
    printf("%d\n",duration);
   }




return 0;
}
