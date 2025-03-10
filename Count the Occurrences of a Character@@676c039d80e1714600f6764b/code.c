#include <stdio.h>
#include <string.h>

int main(){
    char str1[100];
    char d;
    scanf("%s" , str1);
    scanf("%c" , &d);
    printf("%c" , d);
    int n = strlen(str1);
    int c = 0;
    for(int i = 0 ; i<n ; i++){
   
       if (str1[i] == d) {
          c++;
          
       }
      }
    printf("%d" , c);
    return 0 ;
     

   
}