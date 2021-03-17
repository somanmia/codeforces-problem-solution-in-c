#include<stdio.h>
int main(){
int N,A=0,D=0;
scanf("%d",&N);
char ch[N];
scanf("%s",ch);
for(int i=0;i<N;i++){
    if(ch[i]=='A'){
        A++;
    }else{
      D++;
    }
}


if(A>D){
    printf("Anton\n");
}else if(D>A){
   printf("Danik\n");
}else {
   printf("Friendship\n");
}



return 0;
}
