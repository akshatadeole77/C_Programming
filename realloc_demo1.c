#include <stdio.h>
#include <stdlib.h>


int main()
{
   
    int *Arr = NULL;

    //step 1: Allocate the memory
    Arr = (int *)malloc(5 * sizeof(int));

    //step 2 : Use the memory

    Arr = (int *) realloc(Arr,10*sizeof(int));

    //step 3 : free the memory
    free(Arr);

    return 0;
}