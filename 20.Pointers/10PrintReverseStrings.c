#include <stdio.h>
#include <string.h>
int main()
{
    char s[20], *p, i, l, temp;
    printf("Enter the string\n");
    gets(s);
    p = &s[0];
    for (l = 0; p[l]; l++);
    for(i=0;i<l/2;i++)
    {
        temp = p[i];
        p[i] = p[l-i-1];
        p[l-i-1] = temp;
    }
        printf("%s", p);
    return 0;
}