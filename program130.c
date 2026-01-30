#include<stdio.h>
#include<stdlib.h>

int CountOdd(int Arr[],int iSize)  
{
    int iCnt = 0, iOdd = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2 == 1))
        iOdd++;

    }
    return iOdd;
    
        

}

int main()
{
    int iLength = 0, iCnt = 0 , iRet = 0;
    int *ptr = NULL;

    printf("Enter numbers of elements :");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));
    if(NULL == ptr) 
    {
        printf("Unable to allocated memory\n");
        return -1;
    }

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    { 
        scanf("%d",&ptr[iCnt]);

    }
    
    iRet = CountOdd(ptr,iLength);

    printf("Numbers of odd elements are : %d\n",iRet);

    free(ptr);





    return 0;
}