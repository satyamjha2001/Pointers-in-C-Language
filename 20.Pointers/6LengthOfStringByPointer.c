#include<stdio.h>
int main() {
char s[20],*p;
printf("Enter the string\n");
fgets(s,20,stdin);
p=s;
int l;
for(l=0;*(p+l);l++); //(l=0;p[l];l++)
printf("Length of string = %d",l-1);
return 0;
}