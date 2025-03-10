#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}
int main(){
    char str1[100];
    char str2[100];
    scanf("%s" , &str1);
    scanf("%s" , &str2);
    int n = strlen(str1);
    int y = strlen(str2);

    if(n!=y){
        printf("No");
        return 0;
     }
     else{

    qsort(str1, strlen(str1), sizeof(char), compare);
    qsort(str2, strlen(str2), sizeof(char), compare);
    int y = strcmp(str1, str2);
    if(y==1){
        printf("Yes");
        return 0;
    }
    else{
        printf("No");
        return 0;
     }
    //    for(int i = 0 ; i<n ; i++){
    //     for(int j = 0 ; j < y ; j++){
    //         if(str1[i]==str[j]){

    //         }
    //     }
    //    }
     }

   
}