#include <stdio.h>

int main()
{
    int Arr[5] = {10,20,30,40,50};

    printf("Size of Arr : %d\n", sizeof(Arr));       //20bytes
    printf("Arr : %d\n", Arr);                       //100
    printf("&Arr : %d\n", &Arr);                 //100

    printf("Arr + 1 : %d\n", Arr + 1);     //104
    printf("(&Arr) + 1 : %d\n", (&Arr) + 1);  //120






    return 0;
}