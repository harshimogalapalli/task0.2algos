
//Lomuto Randomised Quick Sort Algorithm

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void swap(int *a, int *b)
{
	int temp; 
	temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int arr[], int low, int high) 
{ 
    int pivot = arr[high];  
    int i = (low - 1); 
  
    for (int j = low; j <= high - 1; j++) 
	{ 
  
        
        if (arr[j] <= pivot) 
		{ 
  
            i++; 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 

int rand_partition(int arr[], int low, int high) 
{ 
    srand(time(NULL));

    int random = low + rand() % (high - low); 
   
    swap(&arr[random], &arr[high]); 
  
    return partition(arr, low, high); 
} 

void Rand_qS(int arr[], int low, int high) 
{ 
    if (low < high)
	{ 
  
        int pi = rand_partition(arr, low, high); 
  
        Rand_qS(arr, low, pi - 1); 
        Rand_qS(arr, pi + 1, high); 
    } 
} 

void printArray(int arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
    {
        
   		cout<< arr[i]<<" "; 
    }
	cout<<endl;
} 

int main() 
{ 
    int arr[100];
    int n;
    
    cout<<"Enter number of elements in array(<100)";
    cin>>n;
    cout<<"Enter Array Elements";
    for(int i=0; i<n; i++)
    {
    	cin>>arr[i];
	}
    Rand_qS(arr, 0, n - 1); 
    cout<<"Sorted array:"<<endl; 
    printArray(arr, n); 
    return 0;
}

