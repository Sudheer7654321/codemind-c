#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    int z,s;
    while(x<=10&&y<=10){
        z=21-(x+y);
        if(z<=10){
            printf("%d",z);
            break;
        }
        else printf("-1");
        break;
    }
}