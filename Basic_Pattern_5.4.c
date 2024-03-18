#include<stdio.h>
int main(){
    int i, j, n, k,m=1;
    scanf("%d", &n);
    for(i = n ; i >= 1; i--){
        
            for(j = 1; j <=i ; j++){
                printf("%d", j);
            }
            for(k = n-i; k > 0 ; k--){
                printf("*");
            }
            printf("
");
            m++;
    }
    return 0;
}
