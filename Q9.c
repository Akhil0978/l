#include<stdio.h>
int main()
{
    int a[10][10];
    int i,j,rows,columns,count=0;
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
          if(a[i][j]==0)
            count++;
      }
    }
    if(count>(rows/columns)/2)
        printf("Sparse \n");
    else
        printf("Dense \n");
    return 0;
}
