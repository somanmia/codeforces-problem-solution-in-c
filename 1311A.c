#include<stdio.h>
int main(){
int T,x,y;
scanf("%d",&T);
while(T--){
    scanf("%d %d",&x,&y);
    if(x==y){
        printf("0\n");
    }else if((x<y) && (y-x)%2==0){
       printf("2\n");
    }else if((x>y) && (x-y)%2==1){
       printf("2\n");
    }else if((x>y) && (x-y)%2==0){
      printf("1\n");
 
    }else{
printf("1\n");
    }
}
 
 
 
return 0;
}
