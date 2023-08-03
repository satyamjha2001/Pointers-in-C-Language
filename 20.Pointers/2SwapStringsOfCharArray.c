#include<stdio.h>
#include<string.h>
void swap(char*,char*);
int main() {
char a[20],b[20];
printf("Enter your first string\n");
fgets(a,20,stdin);
printf("Enter your second string\n");
fgets(b,20,stdin);
swap(a,b);
printf("\nStrings after swap\n");
printf("\nFirst string\n%s",a);
printf("Second string\n%s",b);

return 0;
}
void swap(char *p,char *q)
{
    char t[20];
    strcpy(t,p);
    strcpy(p,q);
    strcpy(q,t);
}