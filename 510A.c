#include<stdio.h>
int main(){
int row,col,n,m;
scanf("%d %d",&n,&m);
for(row=1;row<=n;row++){
    for(col=1;col<=m;col++){
        if(row%2==0){
            if(row%4==0){
               if(col==1){
                  printf("#");
               }else{
                  printf(".");
               }
            }else{
                    if(col==m){
                  printf("#");
                  }else{
                  printf(".");
                  }
            }
        }else{
          printf("#");
        }
 
 
 
 
    }printf("\n");
}
 
 
 
return 0;}
