#include<stdio.h>
#include<conio.h>
void swap(int x, int y);
void main()
{
  int a,b;
  clrscr();
  printf("\nEnter the first number:");
  scanf("%d",&a);
  printf("Enter the second number:");
  scanf("%d",&b);
  printf("\nBefore Swapping a=%d & b=%d.",a,b);
  swap(a,b);
  getch();
}
void swap(int x, int y)
{
  int temp,a,b;
  temp=x;
  x=y;
  y=temp;
  printf("\n\nAnswer:a=%d and b=%d.",x,y);
}