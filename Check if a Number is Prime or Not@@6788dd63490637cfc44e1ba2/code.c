#include <stdio.h>

int main() {
    int a;
    scanf("%d" , &a);
    if(a<1){
        printf("Not Prime");
    }
    else{
        int c=0;
        for(int i=2 ; i<a ; i++){
            if(a%i==0){
                c++;
            }
        }
        if(c>0){
            printf("Not Prime");
        }
        else{
            printf("Prime");
        }
    }
    return 0;
}