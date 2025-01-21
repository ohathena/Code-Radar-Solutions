#include <stdio.h>

int main() {
    int a;
    scanf("%d" , &a);
    // printf("%d" , a);
     const char* days[] = {"Monday" , "Tuesday" , "Wednesday" , "Thursday" , "Friday" , "Saturday" , "Sunday"};
      printf("%s", days[a-1]);
    // printf("%s" , days[1]);
    return 0;
}