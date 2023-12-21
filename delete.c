#include<stdio.h>
int main() 
{
  int n=5,i;
  printf("enter the value:\n");
int arr[5]={1,2,3,4,5}; 
  int position=4;

for(i=0;i<n;i++)
 {
     printf("%d",arr[i]);
}
    for (i = position; i < n; i++) {
        arr[i] = arr[i + 1];
      n--;
    }
    for(i=0;i<n;i++)
	{
        printf("\n%d",arr[i]);
    }
return 0;
}
