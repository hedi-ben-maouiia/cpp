#include<stdio.h>

int foo(int x, int y){
   return x + y; 
}
int fac(int n){
    if(n == 1)
        return 1;
    return n * fac(n-1);
}
int main(void){
    foo(10,2);
    fac(2);
    printf("Hello, World!\n"); 
    return 0;
}

