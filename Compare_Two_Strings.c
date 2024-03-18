#include <stdio.h>
int main() {
    char str1[100], str2[100];
    int isEqual = 1;
   
    scanf("%s", str1);
    
    scanf("%s", str2);
    int i = 0;
    while (str1[i] != NULL || str2[i] != NULL) {
        if (str1[i] != str2[i]) {
            isEqual = 0;
            break; 
        }
        i++; 
    }
    if (isEqual) {
        printf("Strings are Equal
");
    } else {
        printf("Strings are not Equal
");
    }

    return 0;
}
