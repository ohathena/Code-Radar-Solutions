void fibonacciSeries(int n){
    int a=0;
    int b=1;
    for(int i =0; i<n ; i++){
        printf("%d" , a);
        a = b;
        b= a+b;
    }
}