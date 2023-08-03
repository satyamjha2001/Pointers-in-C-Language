#include <stdio.h>
void sort(int *, int);
int main()
{
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the numbers: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a, n);
    printf("Sorted aray is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
void sort(int *ptr, int size)
{
    int round, i, t;
    for (round = 1; round < size; round++)
    {
        for (i = 0; i < size - round; i++)
        {
            if (ptr[i] > ptr[i + 1]) // if (*(ptr + i) > *(ptr + i+1))
            {
                t = ptr[i];          // t = *(ptr + i);
                ptr[i] = ptr[i + 1]; // *(ptr + i) = *(ptr + i+1);
                ptr[i + 1] = t;      // *(ptr + i+1) = t;
            }
        }
    }
}