#include<stdio.h>
int main()
{
	int i,x,insert,n=10;
	int arr[100]={0};
	for(i=0;i<10;i++)
	arr[i]=i+1;
	for(i=0;i<=n;i++)
	printf("%d",arr[i]);
	{
		x=50;
		insert=5;
		n++;
	}
	for(i=n-1;i>=insert;i--)
	arr[i]=arr[i-1];
	arr[insert-1]=x;
	for(i=0;i<=n;i++)
    printf("\n%d",arr[i]);
	return 0;
}
