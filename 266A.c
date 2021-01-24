#include<stdio.h>
int main(){
int N,i;
scanf("%d",&N);
char ch[N];
scanf("%s",ch);
int count=0;
for(i=0;i<N-1;i++){
   if(ch[i]==ch[i+1]){
    count++;
   }
}
printf("%d\n",count);
 
 
 
return 0;
}
