#include<stdio.h>
void arr_1d();
int main(){
    arr_1d();
    
    }

void arr_1d(){
    int arr[]={1,2,3,4};
    for (int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        printf("%d",arr[i]);
    }
    
}