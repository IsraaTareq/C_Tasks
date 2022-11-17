#include <stdio.h>
#include "STD_Types.h"
#define   SIZE  10

void merge_sort( int first, int last );
int merge(int  first, int mid, int last );
void quicksort( int first, int last );

int main()
{
/*
//Bubble_Sort
	int arr[SIZE];
	int i,j,sorted=0;
	int temp=0;
	
	for(i=0;i<SIZE;i++)
	{
		printf("PLz enter number %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	
	while(!sorted)
	{
		sorted=1;
		i=0;
		for(j=0;j<SIZE-1-i;j++)
		{
			if (arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				sorted=0;
			}
			
		}
		i++;
	}
	printf("the numbers after sorting\n ");
	
	for(i=0;i<SIZE;i++)
	{
		printf(" %d\n ",arr[i]);
	}
	
//--------------------------------------------------------------------	

//insertion_Sort

 int i,j,temp;
 int arr[SIZE];
 
 for(i=0;i<SIZE;i++)
	{
		printf("PLz enter number %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	
 for (  i = 1; i <=SIZE-1; i++ )

{
	 j=i;
	 
	 while((j>0)&&(arr[j]<arr[j-1]))
		 
	 { 
		 temp= arr[j];
		 arr[j]=arr[j-1];
		 arr[j-1]=temp;
		 j--;
	 } 
	 
}

 printf("the numbers after sorting\n ");

for(i=0;i<SIZE;i++)
	{
		printf(" %d \n",arr[i]);
		
	}
	

//-----------------------------------------------------------------------	
	
//Selection_sort

int i,j,temp;
 int array[SIZE];
 
 for(i=0;i<SIZE;i++)
	{
		printf("PLz enter number %d : ",i+1);
		scanf("%d",&array[i]);
	}
	
for (i = 0 ; i < SIZE-1 ; i++)
{
	    int index = i;
		
	 for(int j = i+1 ; j < 	SIZE ; j++)
	 {
	   if(array[j] < array[index])
	   index = j;
	 }
	 
	 int temp = array[i];
	 array[i] = array[index];
	 array[index] = temp;
	 
}
	 
for(i=0;i<SIZE;i++)
	{
		printf(" %d \n",array[i]);
		
	}
	
	
//---------------------------------------------------------------

//	quick_sort
int i;
int array[SIZE];

for(i=0;i<SIZE;i++)
{
	scanf("%d",&array[i]);
}
quicksort(0,9);

for(i=0;i<SIZE;i++)
{
	printf("%d\n",array[i]);
}
*/

//merge_sort
int i;
int array[SIZE];

for(i=0;i<SIZE;i++)
{
	scanf("%d",&array[i]);
}
merge_sort(0,9);

for(i=0;i<SIZE;i++)
{
	printf("%d\n",array[i]);
}

}

void merge_sort( int first, int last ) 
{
if(first<last)
{
int midpoint = (first + last)/2;
merge_sort( first, midpoint );
merge_sort( midpoint+1, last );
merge( first, midpoint, last );
}
}
int merge( int first, int mid, int last ) 
{
int i1 = first, i2 = mid+1, k = first;
int array[SIZE];
int arrayout[SIZE];
while ( i1 <= mid && i2 <= last ) {
if ( array[i1] <= array[i2] ) {
arrayout[k] = array[i1];
i1++;k++;
} else { 
arrayout[k] = array[i2];
i2++; k++;
}
}
while ( i1 <= mid ) {
arrayout[k] = array[i1];i1++, k++;}
while ( i2 <= last) {
arrayout[k] = array[i2]; i2++, k++;}


for (int i=first ; i <= last; i++) 
{
array[i] = arrayout[i]; 
}
}




/*
void quicksort( int first, int last )
 {
	int i, j, pivot, temp;
	int array[SIZE];
	
	if(first<last)
	{
	pivot=first;
	i=first+1;
	j=last;
	
	while(i<j)
	{
	while(array[i]<=array[pivot] && i<=last)
	i++;

	while(array[j]>array[pivot]&& j>=first)
	j--;

	if(i<j)
	{
	temp=array[i];
	array[i]=array[j];
	array[j]=temp;
	}
	}
	
	temp=array[pivot];
	array[pivot]=array[j];
	array[j]=temp;
	quicksort(first,j-1);
	quicksort(j+1,last);
}
}
*/
	




