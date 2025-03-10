#include <stdio.h>
#include <string.h>

int main(){
    char str1[100];
    scanf("%s" , str1);
    char d;
    scanf("%c" , &d);
    int n = strlen(str1);
    int c = 0;
    for(int i = 0 ; i<n ; i++){
         printf("%c %c" , str1[i] , d);
       if (str1[i] == d) {
          c++;
          
       }
      }
    printf("%d" , c);
    return 0 ;
     

   
}