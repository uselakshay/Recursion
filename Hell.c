/* write a programt o create hell with in me something that's worth while you have been working from the time you started

array of 15 20 elements arranged in ascending order 

create a structure out of that array stating unique number as the array of that element now , let the other details be inputted by the user
find the number you got in english and print it stating the importance of that number in life right now 

Also please tell the significance of the other number you wrote or you entered 

*/

#include<stdio.h>
#include<string.h>
// int main(){
//     int a,b;
//     a=10,b=20;
//     printf("%d, %d ",a , b );
//     return 1;
// }
struct Hell
{
    /* identify number and reason behind it and 1 word for it  */
    char place;
    int number;
    char reason_behind_it;
}Hell1[20];

int main(){
    int arr[20]={9,6,3,12,17,21,29,31,32,37,69,71,89,9};
    printf("Printing Array number ");
    int size_arr=sizeof(arr)/sizeof(arr[1]);
    for (int i=0;i<size_arr;i++){
    
        printf("\n %d",arr[i]);
        printf("Index is %d",i+1);

    }
    printf("Array printing to get Data from you");
    for (int i=0;i<size_arr;i++){

        printf("Type Details about %d",arr[i]);
        Hell1[i].number=arr[i];

        puts("Type Reason behind it ");
        char* reason;
        scanf("%s",reason);
        strcpy(Hell1[i].reason_behind_it,reason);

        char* place;
        puts("Place behind it ");
        scanf("%s",place);
        strcpy(Hell1[i].place,place);

    }
    printf("All details are submitted ");

    for(int i=0;i<size_arr;i++){
        printf("Number is %d \nReason is %s \nPlace behind it %s ",Hell1[i].number,Hell1[i].reason_behind_it,Hell1[i].place);
    }
    return 0;
}