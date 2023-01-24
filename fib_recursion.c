#include<stdio.h>

int get_fib(int n){
    if(n<=1) {
        return n;
    }
    else return get_fib(n-1)+get_fib(n-2);
}
int main(){
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        printf("%d\t", get_fib(i));
    }

    return 0;
}
