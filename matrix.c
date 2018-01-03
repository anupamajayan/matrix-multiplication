#include<stdio.h>

void main()
{
		int a[50][50],b[50][50],c[50][50],i,j,k,m,n,x,y,value,mul;
	
dimension:	printf("enter the dimension of first matrix: ");
		scanf("%d%d",&m,&n);
		printf("enter the dimension of second matrix: ");
		scanf("%d%d",&x,&y);
		if(n!=x)
		{
			printf("the given matrix dimension is not appropriate for multiplication! please enter another dimensions");
			goto dimension;
		}
		printf("\nenter the first matrix:\n");
		for(i=1;i<=m;i++)
		{
			for(j=1;j<=n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}

		printf("\nenter the second matrix:\n");
		for(i=1;i<=x;i++)
		{
			for(j=1;j<=y;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		
		for(i=1;i<=m;i++)
		{
			for(j=1;j<=y;j++)
			{
				value=0;
				for(k=1;k<=n;k++)
				{
				mul=a[i][k]*b[k][j];
				value=value+mul;
				}
				c[i][j]=value;		
			}
		}

		printf("\nthe multiplied matrix is: \n");
		
		for(i=1;i<=m;i++)
		{
			for(j=1;j<=y;j++)
			{
				printf("%d\t",c[i][j]);
			}
		printf("\n");
		}
		
}
