#include <stdio.h>
void st(int roll, char name[], float marks){
    printf("Roll Number: %d, Name: %s, Marks: %.2f" , roll , name , marks);
}
int main() {
    int n, roll;
    char name[100];
    float marks;
    scanf("%d" , &n);
    for(int i =0 ; i<n ; i++){
        scanf("%d" , &roll);
        scanf("%s" , &name);
        scanf("%.2f" , &marks);
        st(roll , name , marks);

    }
    
    return 0;
}