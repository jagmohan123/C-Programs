#include<stdio.h>
i main()
{
int position,i,a[10],n;
system("cls");
printf("enter the value of n\n");
scanf("%d",&n);
printf("enter number\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("the input no.is \n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}printf("enter the position of element you want to print");
scanf("%d",&position);
if(position>=n+1)
{
printf("deletion is not possible \n");
}
else
{
for(i=position-1;i<n-1;i++)
{
a[i]=a[i+1];
printf("the resultant array is \n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}
}
getch();
}
