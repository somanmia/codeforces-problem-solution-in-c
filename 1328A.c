#include<stdio.h>
int main(){
int N,i,a,b,count;
scanf("%d",&N);
for(i=1;i<=N;i++){
    scanf("%d %d",&a,&b);
    if(a%b==0){
        printf("0\n");
    }else{
       printf("%d\n",b-(a%b));
    }
 
 
}
 
return 0;
}
