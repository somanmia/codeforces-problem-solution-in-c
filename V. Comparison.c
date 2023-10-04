#include<stdio.h>
int main(){
int x,y;
char ch;
scanf("%d %c %d",&x,&ch,&y);
if(ch=='>'){
    if(x>y){
        printf("Right\n");
    }else{
       printf("Wrong\n");
    }
}if(ch=='<'){
    if(x<y){
        printf("Right\n");
    }else{
       printf("Wrong\n");
    }
}if(ch=='='){
    if(x==y){
        printf("Right\n");
    }else{
       printf("Wrong\n");
    }
}





return 0;
}
