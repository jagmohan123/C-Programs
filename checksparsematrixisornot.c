#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a[5][5],n;
int row,collum,count;
system("cls");
printf("please enter the row \n");
scanf("%d",&row);
printf("enter the value of collum\n");
scanf("%d",&collum);
printf("enter the element\n");
for(i=0;i<row;i++)
{
for(j=0;j<collum;j++)	
{
scanf("%d",&a[i][j]);
if(a[i][j]==0)
{
count++;
}
}
}
if(count>=(row*collum)/2)
{
printf("the matrix is sparse matrix \n");
}
else
{
printf("the given matrix is non sparse matrix \n");
}
printf("the matrix is \n");
for(i=0;i<row;i++)
{
for(j=0;j<collum;j++)	
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("the number of zero in matrix is= %d\n",count);
getch();
}
