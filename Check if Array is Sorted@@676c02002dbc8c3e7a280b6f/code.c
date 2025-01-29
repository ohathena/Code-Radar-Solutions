#include <stdio.h>

int main() {
    int a;
    scanf("%d" , &a);
    int ar[a];
    for(int i=0 ; i<a ; i++){
        scanf("%d" , &ar[i]);
    }
    for(int i= 0 ; i<a-1 ; i++){
        if(ar[i] > ar[i+1]){
            printf("Not Sorted");
        }
        else{
            printf("Sorted");
        }
    }
    return 0;
}