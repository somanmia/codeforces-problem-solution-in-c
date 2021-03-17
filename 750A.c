#include<stdio.h>
int main(){
  int n,k,i,total_time,count,sum;
  scanf("%d %d",&n,&k);
  total_time=240-k;
  sum=0;
  count=0;
  for(i=1;i<=n;i++){
       sum+=i*5;
       if(sum<=total_time){
          count++;
       }else{
         break;
       }
  }
  printf("%d\n",count);
 
return 0;
}
