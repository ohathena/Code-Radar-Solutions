#include <stdio.h>

int main() {
    int a;
    scanf("%d" , &a);
    int ar[a];
    int c=0;
    for(int i=0 ; i<a ; i++){
        scanf("%d" , &ar[i]);
    }
    for(int i= 0 ; i<a-1 ; i++){
        if(ar[i] > ar[i+1]){
            printf("Not Sorted");
            break;
            c = 1;
        }
       
    }
    if(c==0){
        printf("Sorted");
    }
    return 0;
}