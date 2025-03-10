#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    fgets(str1, sizeof(str1), stdin);
    int n = strlen(str1);
    char str2[100];
    int c = 0;
    int start = 0 , end = 0;
    for (int i = 0; i<n; i++) {
        if (str1[i] == ' ' || str1[i] == '\0') {
           for(int j = end; j>=start ; j--){
              printf("%c" , str1[j]);
           }
           printf(" ");
           start = i;
        }
        else{
            end = i;
        }
    }
    return 0;
}
