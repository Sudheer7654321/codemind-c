#include<stdio.h>
int main(){
    char s1[100],s2[100];
    scanf("%s",s1);
    int i,j,k=0;
    for(i=0;s1[i]!=NULL;i++);
    for( j=0;j<i;j++)
    {
        s2[j]=s1[i-j-1];
        
    }
    for(i=0;s1[i]!=NULL;i++){
    if(s1[i]!=s2[i]){
    k=1;
    break;
    }
    }
    if(k==0) printf("Palindrome");
    else printf("Not Palindrome");
}