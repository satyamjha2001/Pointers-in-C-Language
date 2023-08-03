#include<stdio.h>
int main() {
char s[20],v[]={"AEIOUaeiou"},*p,*q;
printf("Enter the string\n");
fgets(s,20,stdin);
p=s;
q=v;
int l,i,j,count=0;

for(l=0;p[l];l++);
for(i=0;p[i];i++)
{
    for(j=0;q[j];j++)
    {
        if(p[i]==q[j])
        {
            count++;
            break;
        }
    }
}
printf("Vowels --> %d\n",count);
printf("Consonant --> %d",(l-count));
return 0;
}