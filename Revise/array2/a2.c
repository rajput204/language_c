#include<stdio.h>
void sortasce(int b[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(b[i]>b[j])
            {
                temp=b[j];
                b[j]=b[i];
                b[i]=temp;
            }
        }
    }
    printf("the ascending order sorting we get:");
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);

    }
    printf("\nthe second smallest element:%d",b[1]);
}
int main()
{
    int size;
    printf("enter the size of the array:");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    sortasce(a,size);
    return 0;
}