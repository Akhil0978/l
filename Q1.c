#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],sum [3][3];
    int i,j;
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
    printf("\n Added matrix is \n");
    for(i=0;i<3;++i)
    for(j=0;j<3;++j)
    {
        sum[i][j]=a[i][j]+b[i][j];
    }
    for(i=0;i<3;++i)
    for(j=0;j<3;++j)
    {
        printf(" %d",sum[i][j]);

        if(j==2)
        {
            printf("\n");
        }
    }
        return 0;
}
