#include<stdio.h>
int main(){
int n,k,i;
 
scanf("%d %d",&n,&k);
int array[n];
for(i=0;i<n;i++){
    scanf("%d",&array[i]);
}
int count=0;
for(i=0;i<n;i++){
   if(array[i]>0 && array[i]>=array[k-1]){
       count++;
   }
}
printf("%d\n",count);
 
 
return 0;
}
