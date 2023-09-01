#include<stdio.h>
#include<stdio.h>
void main()
{
//int a[]={11,1,2,3,4,5,6,7,8,9}; we can initialize
int i,a[10];
system("cls");
for(i=0;i<=10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=10;i++)
printf("the index %d is elelment of array %d\n",i,a[i]);
getch();
}


