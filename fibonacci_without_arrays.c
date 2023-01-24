#include<stdio.h>

int print_fib(int n);
int main(){
    int n;
    scanf("%d", &n);
    print_fib(n);
    return 0;
}

int print_fib(int n){
    int fib=0;
    if (n==1) {
        fib = 0;
    }

    else if (n==2) {
        fib = 1;
    }
    else {
        fib = print_fib(n-1) + print_fib(n-2);
    }
    printf("%d\n", fib);
    return fib;
}
