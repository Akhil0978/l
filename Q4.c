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
    sum=a[0][0]+a[1][1]+a[2][2];
    printf("The sum of right diagonal matrix is : %d" ,sum);
    return 0;
}
