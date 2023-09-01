#include<stdio.h>
#include<conio.h>
struct array 
{
char a[10];
int i,n;
};
void main()
{
struct array a1;
system("cls");
printf("enter the size of array \n");
scanf("%d",&a1.n);
printf("enter the character in array\n");
for(a1.i=0;a1.i<a1.n;a1.i++)
{
fflush(stdin);//with the help of this func.provide buffer in input
scanf("%c",&a1.a[a1.i]);
}
printf("the characters of array is \n");
for(a1.i=0;a1.i<a1.n;a1.i++)
{
printf("%c",a1.a[a1.i]);
}
getch();
}

