#include<stdio.h>
int main()
{
    int a[3][3];
    int i,j,sum=0;
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
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=sum+a[i][j];
        }
         printf("\n Sum of row is  %d",sum);
        sum=0;
    }
    printf("\n*******************************");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=sum+a[j][i];
        }
         printf("\n Sum of column  is  %d",sum);
        sum=0;
    }
    return 0;
}
