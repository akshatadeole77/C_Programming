#include<stdio.h>
#include<stdlib.h>
///////////////////////////////////////////////////////////////
// Function Name : CountEven
// Description   : Accept N from users & return frequency of even no
// Input         : Integer
// Output        : String
// Author        : Akshata Dhananjay Deole
// Date          : 19/11/2025
///////////////////////////////////////////////////////////////

int CountEven(int Arr[], int iLength)
{
    int iCnt = 0, evenCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
      if(Arr[iCnt] % 2 == 0)
      {
        evenCount++;
      }
    }
    return evenCount;

}


int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter the number of elements");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enetr %d elements",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
    printf("Enter element : %d",iCnt+1);
    scanf("%d",&p[iCnt]);
    }

    iRet = CountEven(p, iSize);

    printf("Result is %d",iRet);

    free(p);



    return 0;
}