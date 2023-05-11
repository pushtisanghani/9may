#include<stdio.h>
#include<conio.h>

void main()
{
    int i=1,fact,n;
    clrscr();
    printf("enter number :");
    scanf("%d",&n);
    while(i<=n)
    {
      fact=fact*i;
      i++;
    }
    printf("%d",fact);
  getch();
}