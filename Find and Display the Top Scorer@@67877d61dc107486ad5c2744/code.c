#include <stdio.h>
void st(int roll, char name[], float marks , int i){
    float max = 0.00;
    int  troll;
    char tname[100];
    // if(marks > max){
    //     max = marks;
    //     troll = roll;
    //     tname = name;   
    // }
    // if(i==n-1){
    // printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f \n" , troll , tname , max);
    // }

}
int main() {
    int n, roll;
    char name[100];
    float marks;
    scanf("%d" , &n);
    for(int i =0 ; i<n ; i++){
        scanf("%d" , &roll);
        scanf("%s" , &name);
        scanf("%f" , &marks);
        st(roll , name , marks , i);

    }
    
    return 0;
}