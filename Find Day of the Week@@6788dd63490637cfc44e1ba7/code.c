#include <stdio.h>

int main() {
    int a;
    scanf("%d" , &a);
    char* days[7][10] = {"Monday" , "Tuesday" , "Wednesday" , "Thursday" , "Friday" , 
    "Saturday" , "Sunday"};
    printf("%s", days[1]);
    return 0;
}