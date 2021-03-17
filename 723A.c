
#include<stdio.h>
int main(){
int x,y,z,result;
scanf("%d %d %d",&x,&y,&z);
if(x>y && x>z){
    if(y>z){
        result=x-z;
    }else{
        result=x-y;
    }
}else if(y>x && y>z){
      if(x>z){
         result=y-z;
      }else{
         result=y-x;
      }
}else{
     if(y>x){
        result=z-x;
     }else{
        result=z-y;
     }

}
printf("%d\n",result);


return 0;
}
