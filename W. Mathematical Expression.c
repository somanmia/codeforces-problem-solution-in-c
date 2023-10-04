#include<stdio.h>
int main(){
int x,y,sum,result;
char ch1,ch2;
scanf("%d %c %d %c %d",&x,&ch1,&y,&ch2,&sum);
if(ch1=='+'){
    if((x+y)==sum){
        printf("Yes\n");
    }else{
       printf("%d\n",x+y);
    }
}else if(ch1=='-'){
    if((x-y)==sum){
        printf("Yes\n");
    }else{
       printf("%d\n",x-y);
    }
}else if(ch1=='*'){
         if((x*y)==sum){
        printf("Yes\n");
    }else{
       printf("%d\n",x*y);
    }
}else if(ch1=='/'){
    if((x/y)==sum){
        printf("Yes\n");
    }else{
       printf("%d\n",x/y);
    }
}


return 0;
}
