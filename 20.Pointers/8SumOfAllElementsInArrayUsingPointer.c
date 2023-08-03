#include<stdio.h>
int main() {
int a[10],i,*p,sum=0;
printf("Enter the 10 numbers: \n");
for(i=0;i<10;i++)
{
    scanf("%d",&a[i]);
}
p=a;
for(i=0;i<10;i++)
{
    sum+=p[i];
}
printf("Sum is %d",sum);
return 0;
}