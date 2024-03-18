#include<stdio.h>
int main(){
    int i, j, n, k;
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
            for(j = 1; j <= n; j++){
                if(j%2!=0){
                    printf("1 ");
                }
                else{
                    printf("0 ");
                }
            }
            printf("
");
    }
    return 0;
}
