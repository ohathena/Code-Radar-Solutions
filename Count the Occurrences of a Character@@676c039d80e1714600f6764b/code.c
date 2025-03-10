#include <stdio.h>
#include <string.h>

int main(){
    char str1[100];
    scanf("%s" , &str1);
    char d;
    scanf("%s" , &d);
    int n = strlen(str1);
    int c = 0;
    for(int i = 0 ; i<n ; i++){
       char ch = str1[i];
       if(ch == d){
        c++;
       }
      }
      return c;
     

   
}