#include<stdio.h>
int main()
{
    char cvalue ='A';
    int ivalue = 100;
    float fvalue = 95.08f;
    double dvalue = 98.567878;

    printf("Size of character is : %lu\n", sizeof(cvalue));
    printf("Size of integer is : %lu\n", sizeof(ivalue));
    printf("Size of float is : %lu\n", sizeof(fvalue));
    printf("Size of double is : %lu\n", sizeof(dvalue));

    printf("Address of cvalue is : %lu\n", &cvalue);
    printf("Address of ivalue is : %lu\n", &ivalue);
    printf("Address of fvalue is : %lu\n", &fvalue);
    printf("Address of dvalue is : %lu\n", &dvalue);

  

  return 0;
}