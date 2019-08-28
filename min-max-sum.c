#include<stdio.h>
int main(){
    long int x=0,max=0,a[5],sum;
    for(int i=0;i<5;i++){
        scanf("%ld",&a[i]);
        x=x+a[i];
    }
    for(int i=0;i<5;i++){
        sum=0;
        for(int j=0;j<5;j++){
            sum=sum+a[j];
        }
        sum=sum-a[i];
        if(sum>max){
            max=sum;
        }
        if(sum<x){
            x=sum;
        }
    }
    printf("%ld %ld",x,max);
    return 0;
}
