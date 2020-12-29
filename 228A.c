#include<stdio.h>
int main(){
  int array[4];
   for(int i=0;i<4;i++){
     scanf("%d",&array[i]);
   }
   for(int i=0;i<4;i++){
     for(int j=i+1;j<4;j++){
        if(array[i]>array[j]){
            int temp=array[i];
            array[i]=array[j];
            array[j]=temp;
        }
     }
   }
int count=0;
  for(int i=0;i<3;i++){
       if(array[i]==array[i+1]){
          count++;
       }
  }
 
  printf("%d\n",count);
 
}
