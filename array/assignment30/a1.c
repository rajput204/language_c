#include<stdio.h>
int main()
{
    int a[10],i,j,temp;
    printf("enter the number of elements");
     for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<10;i++)
    {
    for(j=i+1;j<10;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    }
   for(i=0;i<10;i++)
   {
    printf("%d ",a[i]);
   }
return 0;
}
