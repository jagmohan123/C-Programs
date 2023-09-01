#include<stdio.h>
#include<stdio.h>
void main()
{int j,i,a[3][3],b[3][3],c[3][3],n;
system("cls");
printf("enter the value of n\n");
scanf("%d",&n);
printf("enter the element of first matrix \n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the element of second matrix \n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("the first matrix is \n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("the second matrix is \n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
printf("the subtraction of both matrix is \n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
c[i][j]=a[i][j]-b[i][j];
printf("%d\t",c[i][j]);
}
printf("\n");
}
getch();
}
