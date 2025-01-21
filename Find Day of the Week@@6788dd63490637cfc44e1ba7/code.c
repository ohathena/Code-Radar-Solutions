#include <stdio.h>

int main() {
    int a;
    scanf("%d" , &a);
    if(a>=1 &&a<8){
    int c= a-1;
     const char* days[] = {"Monday" , "Tuesday" , "Wednesday" , "Thursday" , "Friday" , "Saturday" , "Sunday"};
     printf("%s" , days[c]);}
     else{
        printf("Invalid");
     }
    return 0;
}