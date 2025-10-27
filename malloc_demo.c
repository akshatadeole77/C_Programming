#include <stdio.h>
#include <stdlib.h>


int main()
{
    int length = 0;
    int *Arr = NULL;

    printf("Enter the number of elements:\n");
    scanf("%d\n",&length);
    //step 1: Allocate the memory
    Arr = (int *)malloc(length * sizeof(int));
    if(Arr == NULL)
    {
        printf("Unable to allocate memory\n");
    }
    else
    {
        printf("Memory gets successfully allocated\n")

    }

    //step 2 : Use the memory

    //step 3 : free the memory
    free(Arr);

    return 0;
}