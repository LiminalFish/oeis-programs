#include <stdio.h>
#include <stdlib.h>

int fib(int n){
    if (n <= 1){
        return n;
    }

    return fib(n-2)+fib(n-1);
}

int main(int argc, char** argv){
    if(argc > 1){
        for(int i = 0; i < atoi(argv[argc-1]); i++){
            printf("%d\n", fib(i));
        }
        return 0;
    }

    for(int i = 0; i < 25; i++){
        printf("%d\n", fib(i));
    }

    return 0;
}