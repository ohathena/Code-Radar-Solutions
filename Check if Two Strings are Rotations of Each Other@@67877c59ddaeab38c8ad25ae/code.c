#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];
    char temp[100];
    scanf("%s" , str1);
    scanf("%s" , str2);
    int n = strlen(str1);
    int c= 0; 
    for (int i = n-1; i>=0; i++) {
        temp[c]+= str1[i];
        c++;
    }
    temp[c] = '\0';
    if(strcmp(temp , str2)==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
