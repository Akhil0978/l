#include<stdio.h>
int main()
{
    int a[3][3];
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
      for(i=0;i<3;i++)
    {
        printf("\n");
       for(j=0;j<3;j++)
    {
        if(j>=i)
            {
               printf("%d ",a[i][j]);
            }
        else
        {
               printf("0 ");
        }
    }
    }
    return 0;
}
