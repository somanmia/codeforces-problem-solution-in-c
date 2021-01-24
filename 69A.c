#include<stdio.h>
int main(){
int sum=0,sum2=0,sum3=0,x,y,z,N;
scanf("%d",&N);
while(N--){
   scanf("%d %d %d",&x,&y,&z);
   sum+=x;
   sum2+=y;
   sum3+=z;
}
if(sum==0 && sum2==0 && sum3==0){
    printf("YES\n");
}else{
    printf("NO\n");
}
return 0;}
