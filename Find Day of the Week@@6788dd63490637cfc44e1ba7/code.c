#include <stdio.h>

int main() {
    int a;
    scanf("%d" , &a);
    int days[7] = {"Monday" , "Tuesday" , "Wednesday" , "Thursday" , "Friday" , 
    "Saturday" , "Sunday"}
    printf("%s", days[a-1]);
    return 0;
}