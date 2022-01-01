#include<stdio.h>
int main(){
int n,i,sum=0,max=0,a,b;
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d %d",&a,&b);
        sum=(sum-a)+b;
        if(sum>max){
        max=sum;
    }

}
printf("%d\n",max);

return 0;
}
