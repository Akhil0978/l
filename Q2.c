#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3];
    int i,j,sum,k;
    printf("Enter the values in 1st matrix ");
    for(i=0;i<3;++i)
    for(j=0;j<3;++j)
    {
        scanf("%d",&a[i][j]);
    }
      printf("\n Matrix 1 \n");
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
    {
        printf(" %d",a[i][j]);
    }
    printf("\n");
    }
    printf("Enter values in second matrix ");
    for(i=0;i<3;++i)
    for(j=0;j<3;++j)
    {
        scanf(" %d",&b[i][j]);
    }
      printf("\n Matrix 2 \n");
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
    {
        printf(" %d",b[i][j]);
    }
    printf("\n");
    }
    printf("Multiplied matrix is : \n ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                sum=sum+(a[i][k]*b[k][j]);
            }
            c[i][j]=sum;
            sum =0;
        }
    }
     for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
    {
        printf(" %d",c[i][j]);
    }
    printf("\n");
    }
}
