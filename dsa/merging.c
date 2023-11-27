#include<stdio.h>
int main()
{

int i=0,j=0,k=0,n1,n2,n3;
int a[100],b[100],c[100];
printf("enter the number of elements:");
scanf("%d",&n1);
printf("enter thenumber of  elements of 2nd array:");
scanf("%d",&n2);
n3=n1+n2;
printf("enter the values of array 1:");
for(i=0;i<n1;i++)
{
scanf("%d",&a[i]);
}
printf("enter the values of array 2:");
for(j=0;j<n2;j++)
{
scanf("%d",&b[j]);
}
for(i=0;i<n1;i++)
{
printf("%d\t",a[i]);
}
for(j=0;j<n2;j++)
{
printf("%d\t",b[j]);
}
i=0;
j=0;
while(i<n1 && j<n2)
{
if(a[i]<b[j])
{
c[k]=a[i];
i++;
}
else
{
c[k]=b[j];
j++;
}
k++;
}

while(i<n1)
{
c[k]=a[i];
i++;
k++;
}
while(j<n2)
{
c[k]=b[j];
j++;
k++;
}
printf("the sorted array is:");
for(k=0;k<n3;k++)
{
printf("%d\t",c[k]);
}
return 0;
}


