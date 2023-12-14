#include<stdio.h>
 int Isugly(int n){
     if(n<=0) return 0;
     while(n%2==0){
       n/=2;  
     }
      while(n%3==0){
       n=n/3;  
     }
      while(n%5==0){
       n/=5;  
     }
     return n==1;
     
     
 }
 int main(){
     int n;
     scanf("%d",&n);
     if(Isugly(n)){
         printf("Ugly Number");
        
     }
      else printf("Not Ugly Number");
 }