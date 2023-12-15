#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int arr[x],sum=0;
    for(int i=0;i<x;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("%d",sum);
}