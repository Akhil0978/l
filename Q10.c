#include<stdio.h>
int main()
{
    int a[10][10];
    int i,j,rows,columns,sum,index,max=0;
    printf("Enter the no. of rows : ");
    scanf("%d",&rows);
    printf("Enter the no. of columns : ");
    scanf("%d",&columns);
    printf("Enter the values in 1st matrix ");
    for(i=0;i<rows;++i)
    for(j=0;j<columns;++j)
    {
        scanf("%d",&a[i][j]);
    }
      printf("\n Matrix 1 \n");
    for(i=0;i<rows;i++)
    {
       for(j=0;j<columns;j++)
    {
        printf(" %d",a[i][j]);
    }
    printf("\n");
    }
    for(i=0;i<rows;i++)
    {
       for(j=0;j<columns;j++)
    {
        if(a[i][j]==1)
           sum=a[i][j]+sum;
    }
    if(sum>max)
        {max=sum;index=i;}
    }
    printf("\n The no. of 1 are : \n %d",max);
    return 0;
}

