#include <stdio.h>

int main() {
    char ch[100];
    int age;
    char hobby[100];
    scanf("%s" , ch);
    scanf("%d" , &age);
    scanf("%s" , hobby);
    printf("Name: %s\n Age: %d\n Hobby: %s\n" , ch , age , hobby);
 
    return 0;
}