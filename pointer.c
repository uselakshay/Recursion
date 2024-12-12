#include<stdio.h>
void swap(int*, int*);
int main(){
    int *p , *q;
    int a=10;
    int b=11;
    p=&a;
    q=&b;

    void swap(p,q);
    printf("Swapped p = %d  , q = %d",*p,*q);
    return 0;
}
void swap(int *p, int *q){
    int temp=*p;
    *p=*q;
    *q=temp;
}