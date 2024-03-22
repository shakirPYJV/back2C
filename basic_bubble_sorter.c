#include<stdio.h>
void sort(int array[],int size)
{
	for(int i=0; i< size-1; i++)
	{
		for(int j=0; j<size-i-1; j++)
		{
			if(array[j]>array[j+1])
			{
				int temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
}
void print(int array[],int size){
	for(int i = 0; i< size; i++)
	{
		printf("%d ",array[i]);
	}
}
int main()
{
	// int array[] = {7,3,6,2,9,4,1,5,8};
	int array[9];
	printf("Enter your array[9]: ");
	for(int i =0; i< 9 ; i++)
	{
		scanf("%d",&array[i]);
	
	}
	int size = sizeof(array)/sizeof(array[0]);
	sort(array,size);
	print(array,size);
	return 0;
}
