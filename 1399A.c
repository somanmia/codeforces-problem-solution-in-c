#include<stdio.h>
int main(){
int T,n,i,j,count,temp,duration;
scanf("%d",&T);
while(T--){
    scanf("%d",&n);
    int arr[n];
 
 
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
 
    }
    //sorting //
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    count=0;
 
    for(i=0;i<n;i++){
        duration=arr[i]-arr[i+1];
        if(duration>1){
            count++;
        }
    }
 
    if(count>0){
        printf("NO\n");
    }else{
        printf("YES\n");
    }
}
 
 
return 0;
}
