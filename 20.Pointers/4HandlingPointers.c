#include <stdio.h>
int main()
{
    int x = 10, *p, **q, ***r;
    p = &x;
    q = &p;
    r = &q;
    printf("%u %u %u %u \n", x, *p, **q, ***r);
    printf("%u %u %u %u \n", &x, p, *q, **r);
    printf("%u %u %u \n", &p, q, *r);
    printf("%u %u \n", &q, r);
    printf("%u \n", &r);

    return 0;
}