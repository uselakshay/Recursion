#include<stdio.h>
int ptr_func(int , int);
int sum(int , int );
int main(){
    int a,b;
    printf(
        "Please Type 2 Numbers"
    );
    scanf(
        "%d %d", &a, &b
    );
    printf("Sum is %d",a+b);
    return 0;
}