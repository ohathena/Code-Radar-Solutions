#include <stdio.h>
int main() {
    int n , max;
    scanf("%d" , &n);
    int ar[n+1];
    int c=0;
    for(int i=0 ; i<=n ; i++){
        scanf("%d" , &ar[i]);
    }
    max = ar[0];
    for(int j=1 ; j<=n ; j++){
        if(ar[j] >max){
            max =ar[j];
            c++;
        }
        if(c==1)
        {
            break;
        }
    }
    printf("%d" , max);

    return 0;
}