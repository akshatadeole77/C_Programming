#include<stdio.h>

struct demo 
{
    int i;
    float f;
    int j;
};

int main()
{
    struct demo obj;

    struct demo *p = &obj;

    p->i=11;
    p->f=90.4f;
    p->j=21;

    printf("%d\n",p->i);
    printf("%d\n",p->j);
    printf("%d\n",p->f);





    return 0;
}