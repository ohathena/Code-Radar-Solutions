#include <stdio.h>
int main() {
    int n;
    int c=0;
    scanf("%d" , &n);
    int ar[n];
    int temp[n];
    for(int i=0; i<n ; i++){
        scanf("%d" , &ar[i]);
    }
     for(int i=0; i<n ; i++){
         if(ar[i] == 2 || ar[i] == 3){
             temp[c]==ar[i];
             c++;
         }
         else if(ar[i]==0 || ar[i]==1){
             continue;
         }
         else{
             int t=0;
             for(int j=2; j<i ; j++){
                 if(ar[i]%j==0){
                    t++;
                    break;
                }  
            }
          
            if(t==0){
               temp[c]== ar[i];
                 c++;
          }
        }
     }
     int l = sizeof(ar)/ sizeof(ar[0]);
     

    //  int d=0;
    //     for(int i=2 ; i<ar[i] ; i++){
    //         if(ar[i]%i==0){
    //             d++;
    //         }
    //     }
    //     if(d==0){
    //           c++;   
    //     }
       
    // }
    //  printf("%d" , c);
    
    return l;
}