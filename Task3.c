#include <stdio.h>
#include <math.h>
#define size 5

int main()
{
	/*
	//negative_program
	int i;
	int array[size]; 
    
    printf("Enter elements in array : ");
	
    for(i=0; i<size; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("\n the negative elements in array are : ");
	
    for(i=0; i<size; i++)
    {
        if(arr[i] < 0)
        {
            printf("%d\t", array[i]);
        }
	}
	
	
	//2largest_program
	int arr[size], i;
    int max1, max2=0;

    printf("Enter elements in the array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<size; i++)
    {
        if(array[i] > max1)
        {
            max2 = max1;
            max1 = array[i];
        }
        else if((array[i] > max2 )&& (array[i] < max1))
        {
            max2 = array[i];
        }
    }

    printf("First largest : %d\n", max1);
    printf("Second largest : %d", max2);
	
	
   //odd,even_program
	int array[size];
	int eventotal=0;
	int oddtotal=0;
	
	for(i=0;i<Size;i++)
	{
		scanf("%d",&array[i]);

	}

	for(i=0;i<size;i++)
	{
		if(array[i]%2==0)
		{
		eventotal+=array[i+1];
		}
		else
		{
			oddtotal+=array[i];
		}
	}
		printf("%d\n",eventotal);
		printf("%d",oddtotal);
		
	
	//negative_program
	int array[size];  
    int i;
	int flag=0;

    for(i=0; i<size; i++)
    {
        scanf("%d", &array[i]);
    }
	
    for(i=0; i<size; i++)
    {
		
        if(array[i] < 0)
        {
			
            flag++;
        }
    }

    printf("\ntotal negative elements = %d", flag);
	

	//copy_array
    int arrayout[size];
	int array[size];
    int i;
   
    printf("Enter elements of source array : ");
	
    for(i=0; i<size; i++)
    {
        scanf("%d", &array[i]);
    }
	
    for(i=0; i<size; i++)
    {
        arrayout[i] = array[i];
    }

  
    printf("\nElements of copied array : ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", arrayout[i]);
    }
	
	//insert
	int array[size];
    int i, Size, num, pos;

   
    printf("Enter size of the array : ");
    scanf("%d", &Size);

  
    printf("Enter elements in array : ");
    for(i=0; i<Size; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter element to insert : ");
    scanf("%d", &num);
    printf("Enter the element position : ");
    scanf("%d", &pos);
  
        for(i=0; i<pos; i++)
        {
            array[i] = array[i+1];
        }
     
        array[pos+1] = num;
        Size++; 

        for(i=0; i<size; i++)
        {
            printf("%d\t", array[i]);
        }
   
   
   //delete
   int array[size];
    int i, pos;

    printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &array[i]);
    }
	
    printf("Enter the position  : ");
    scanf("%d", &pos);

   
        for(i=pos-1; i<size-1; i++)
        {
            array[i] = array[i + 1];
        }
        size--;

        for(i=0; i<size; i++)
        {
            printf("%d\t", array[i]);
        }
    }
	
	//freq_program
	int array[size];
	int freq[size];
    int i, j, flag;

    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &array[i]);
        freq[i] = -1;
    }

    for(i=0; i<size; i++)
    {
        flag = 1;
		
        for(j=i+1; j<size; j++)
        {
            if(array[i]==array[j])
            {
                flag++;
                freq[j] = 0;
            }
        }

        if(freq[i] != 0)
        {
            freq[i] = flag;
        }
    }

    for(i=0; i<size; i++)
    {
        if(freq[i] != 0)
        {
            printf(" %d \n", freq[i]);
        }
    }

	//unique
int array[size];
	int freq[size];
    int i, j, flag;

    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &array[i]);
        freq[i] = -1;
    }

    for(i=0; i<size; i++)
    {
        flag = 1;
		
        for(j=i+1; j<size; j++)
        {
            if(array[i]==array[j])
            {
                flag++;
                freq[j] = 0;
            }
        }

        if(freq[i] != 0)
        {
            freq[i] = flag;
        }
    }

    for(i=0; i<size; i++)
    {
        if(freq[i]== 1)
        {
            printf(" %d \n", array[i]);
        }
    }
//----------------------------------------------------------------

							//pointers

	int arr[size];
	int i;
	int *ptr=arr;
	
	for (i = 0; i < size; i++)
    {
        scanf("%d", (ptr+i));
          
    }
    ptr = arr;

    for (i = 0; i < size; i++)
    {
        printf("%d, ", *ptr);
        ptr++;
    }
	
	
	int arr[size];
	int arrout[size];
	int i;
	int *ptr=arr;
	int *nptr=arrout;
	int Eptr=&arr[size];
	
	for (i = 0; i < size; i++)
    {
        scanf("%d", (ptr+i));  
    }
	while(ptr<=Eptr)
	{
		*nptr=*ptr;
		nptr++;
		ptr++;
	}
	for (i = 0; i < size; i++)
    {
        printf("%d", arrout);  
    }
	
	
	
	
	int *arr;
	int *arrout;
	int i;
	int * ptr1 = (arr + (size - 1));
	int * ptr2   = (arrout + (size - 1));
	
	printf("First array : \n");
	for (i = 0; i < size; i++)
    {
        scanf("%d", &arr);  
    }
	
	printf("Second array : \n");
	for (i = 0; i < size; i++)
    {
        scanf("%d", &arrout);  
    }

    while(arr <= ptr1 && arrout <= ptr2)
    {
        *arr ^= *arrout;
        *arrout   ^= *arr;
        *arr ^= *arrout;
        arr++;
        arrout++;
	}
	printf("First array after swapping : \n");
	for (i = 0; i < size; i++)
    {
        printf("%d", arr);  
    }
	printf("Second array after swapping : \n");
	for (i = 0; i < size; i++)
    {
        printf("%d", arrout);  
    }
	
	*/
		
	
	
	return 0;
	
	
}
