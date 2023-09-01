#include<stdio.h>
#include<conio.h>
void main()
{
int k,n,i,j,a[10];
system("cls");
printf("enter the value of n \n");
scanf("%d",&n);
printf("enter the element in array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);	
}	
printf("the assending number in the array is \n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(a[i]>a[j])
{
k=a[i];
a[i]=a[j];
a[j]=k;
}	
}
}
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
getch();
}

