#include<stdio.h>
#include<conio.h>

void main()
{
    int a=1,n,sum=0;
    clrscr();
    printf("enter number :-");
    scanf("%d",&n);
    while(a<=n)
    {
     sum=sum+a;
     a++;
    }
    printf("%d",sum);

getch();
}

