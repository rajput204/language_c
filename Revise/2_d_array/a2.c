#include<stdio.h>
void product();
void product()
{
   int a[3][3],b[3][3],c[3][3];
   int i,j;
   printf("enter the elements of the array:");
   for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);
    }
   }
    printf("enter the  second elements of the array:\n");
   for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
    {
        scanf("%d",&b[i][j]);
    }
   }
  
   for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
    {
        c[i][j]=a[i][j]*b[i][j];
    }
   }

   printf("the output of the product :\n");
   for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
    {
        printf("%d ",c[i][j]);
    }
    printf("\n");
   }
  
}
int main()
{
product();
return 0;
}