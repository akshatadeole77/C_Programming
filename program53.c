//Count number of Factors as well as  Non-factors

#include<stdio.h>
void CountFactorsNonFactors(int iNo)
{
    int iCnt = 0, iFrequency1 = 0, iFrequency2 = 0;//iFrequeny1 is for factor and iFreuency2 is for non factor

    if(iNo<0)
    {
        iNo = -iNo;
    }

    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFrequency1++;
        }
        else
        {
            iFrequency2++;
        }
    }

        printf("Numbers of factors are: %d\n",iFrequency1);
        printf("Numbers of non factors are: %d\n",iFrequency2);


}
int main()
{
    int iValue =0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    CountFactorsNonFactors(iValue);

    


    return 0;
}