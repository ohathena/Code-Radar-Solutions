#include <stdio.h>
float ar(int length , int  breath){
   return (length*breath);
}
float pr(int length , int breath){
    int s = length + breath;
    return (2s);
}
int main() {
    int n, length , breath;
    float area , p;
    scanf("%d" , &n);
     for(int i =1 ; i<=n ; i++){
         scanf("%d" , &length);
         scanf("%d" , &breath);
         area= ar(length , breath);
         p= pr(length , breath);
         printf("Rectangle %d: Area = %.2f , Perimeter = %.2f \n" , i , area , p);

     }
    
    return 0;
}