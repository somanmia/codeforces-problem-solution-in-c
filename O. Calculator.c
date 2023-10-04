#include<stdio.h>
int main(){
int m,n,result;
char c;
scanf("%d%c%d",&m,&c,&n);
if(c=='+'){
    printf("%d\n",m+n);
}else if(c=='*'){
    printf("%d\n",m*n);
}else if(c=='-'){
       printf("%d\n",m-n);
}else if(c=='/'){
       printf("%d\n",m/n);
}



return 0;
}
