#include<stdio.h>
void max(int*, int*);
int main() {
int a,b;
printf("Enter two numbers: ");
scanf("%d%d",&a,&b);
max(&a,&b);
return 0;
}
void max(int *p, int *q)
{
    if(*p>*q)
    {
        printf("%d is maximum",*p);
    }
    else
    {
        printf("%d is maximum",*q);
    }
}