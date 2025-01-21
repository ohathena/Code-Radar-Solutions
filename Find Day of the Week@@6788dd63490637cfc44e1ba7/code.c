#include <stdio.h>

int main() {
    int a;
    scanf("%d" , &a);
    int c= a-1;
     const char* days[] = {"Monday" , "Tuesday" , "Wednesday" , "Thursday" , "Friday" , "Saturday" , "Sunday"};
    //   printf("%s", days[a-1]);
     printf("%s" , days[c]);
    return 0;
}