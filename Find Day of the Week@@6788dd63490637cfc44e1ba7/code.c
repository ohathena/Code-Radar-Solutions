#include <stdio.h>

int main() {
    int a;
    scanf("%d" , &a);
    char* days[7][10] = {"Monday" , "Tuesday" , "Wednesday" , "Thursday" , "Friday" , 
    "Saturday" , "Sunday"};
    printf("%c", days[a-1]);
    return 0;
}