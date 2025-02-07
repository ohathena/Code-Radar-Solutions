#include <stdio.h>
int isPrime(num){
    int c=0;
 if(num==0 || num==1){
return 0;
 }
 else if(num==2 || num==3){

    return 1;
 }
 else{
    for(int i = 2 ; i< num/2 ; i++){
        if(num%1==0){
             c++;
            return 0;

        }
    }
    if(c==0){
        return 1;
    }
 }
}


