#include <stdio.h>
int main() {
    int l,r,n;
    scanf("%d%d",&l,&r);
    for (n = l; n <= r; ++n) {
        int org = n;
        int S = 1;
        int temp = org;
        while (temp > 0) {
            int digit = temp % 10; 
            if (digit == 0 || org % digit != 0) {
                S = 0;
                break;
            }
            temp /= 10; 
        }
        if (S) {
            printf("%d ", org);
        }
    }
}
