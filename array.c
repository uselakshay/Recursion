#include <stdio.h>

void arr_1d();
void arr_2d();
void arr_3d();

void main()
{

    // arr_1d();
    // arr_2d();
    arr_3d();
}

void arr_1d()
{
    int arr[] = {1, 2, 3, 4};
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        printf("%d", arr[i]);
    }
}
void arr_2d()
{
    int arr[2][4] = {{1, 2, 3, 4}, {2, 3, 4, 5}};
    int outer_size = 2;
    int inner_size = 4;
    for (int i = 0; i < outer_size; i++)
    {
        printf("\nPrinting Outer array %d:", i);
        for (int j = 0; j < inner_size; j++)
        {
            printf("\n%d", arr[i][j]);
        }
        printf("\n");
    }
}
void arr_3d()
{
    //keep focus on initialisation;
    int arr[2][2][2] = {{{2, 2},
                         {2, 2}},
                        {{4, 4},
                         {4, 5}}};
    int layer = 2; // use layer concpet
    int outer_size = 2;
    int inner_size = 2;
    for (int l = 0; l < layer; l++)
    {
        for (int i = 0; i < outer_size; i++)
        {
            printf("\nLayer %d",l);
            printf("\nPrinting Outer array %d:", i);
            for (int j = 0; j < inner_size; j++)
            {
                printf("\n%d", arr[l][i][j]);
            }
            printf("\n");
        }
    }
}
