#include <stdio.h>
void swap(int *, int *);
int main()
{
    int a, b;
    printf("Enter values of a and b.\n");
    scanf("%d%d", &a, &b);
    swap(&a, &b);
    printf("values after swap");
    printf("\na=%d, b=%d", a, b);
    return 0;
}
void swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}