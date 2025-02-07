#include <stdio.h>
// float ar(length , breath){
//    //return (length*breath);
// }
// float pr(length , breath){
//    // return (2(length+breath));
// }
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