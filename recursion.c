#include <stdio.h>
int fact(int);
int main()
{
    int n;
    printf("Please type num");
    scanf("%d", &n);
    int f = fact(n);
    printf("Factorial is %d", f);
    return 0;
}
int fact(int n)
{
    if (n == 0){
        return 1;
    }else if (n == 1)
    {
        /* code */
        return 1;
    }else 
    {
        /* code */
        return n * fact(n-1);
    }
    
    
    
    }