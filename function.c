#include <stdio.h>
int fact(int);
void fibonacci(int);
int main()
{
    int n;
    printf("Please type number");
    scanf("%d", &n);
    printf("\nFibonacci upto %d terms ",n);
    fibonacci(n);
    printf("\nFactorial is %d", fact(n));
    return 0;
}
int fact(int n)
{
    if (n == 1) return 1;
    else if(n == 0) return 1;
    else return n * fact(n - 1);
}


void fibonacci(int n){
    // 4
    int a=0;
    int b=1;
    printf(" %d %d ",a,b);
    for (int i=2;i<n;i++){
        int c=a+b;
        a=b;
        b=c;
        printf(" %d ",c);
    }
}