#include<stdio.h>
int *ptr_func(int* , int*);
int sum(int , int );
int main(){
    int a,b;
    printf(
        "Please Type 2 Numbers"
    );
    scanf(
        "%d %d", &a, &b
    );
    ptr_func=&sum;
    int product=(ptr_func)(&a,&b);
    printf("Sum is %d",product);
    return 0;
}
int sum(int a,int b){
    return a+b;
}