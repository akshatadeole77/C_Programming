#include<stdio.h>
#include<stdlib.h>

int DisplaySmallest(int Arr[],int iSize)
{
    int iCnt=0,iMin=Arr[0];

    for(iCnt=1;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]<iMin)
        {
           iMin=Arr[iCnt];
        }
    }
    return iMin;
   
    
}
int main()
{
    int iLength=0;
    int *Brr=NULL;
    int iCnt=0;
    int iRet=0;

    printf("Enter the Number of Array:");
    scanf("%d",&iLength);

    Brr=(int*) malloc(iLength * sizeof(int));

    if(NULL == Brr)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter the Element:");

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    iRet=DisplaySmallest(Brr,iLength);
    printf("Smaller Number is:%d\n",iRet);

}