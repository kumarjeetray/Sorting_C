/* It Bubble sorts the numbers in descending order */
#include<stdio.h>
 
void main()
{
	int a[50],n,i,j,temp;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	
	for(i=0;i<n;++i)
    {
        printf("\nEnter the array elements: ");
		scanf("%d",&a[i]);
    }
	for(i=1;i<n;i++)
    {
		for(j=0;j<(n-i);j++)
        {
			if(a[j]<a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
        }
    }
			
	printf("\nArray after sorting: ");
	for(i=0;i<n;++i)
		printf("%d ",a[i]);
 
}
