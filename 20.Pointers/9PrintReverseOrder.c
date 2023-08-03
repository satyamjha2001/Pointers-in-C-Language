#include<stdio.h>
int main() {
int a[5],i,*p;
printf("Enter 5 numbers: \n");
for(i=0;i<5;i++)
{
    scanf("%d",&a[i]);
}
p=a;
printf("Numbers in reverse order: ");
for(i=4;i>=0;i--)
{
    printf("%d ",p[i]);
}
return 0;
}