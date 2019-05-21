#include<time.h>
#include<cstdlib> 
#include<iostream> 
using namespace std; 
int partition(int arr[], int low, int high) 
{ 
    int pivot = arr[high]; 
    int i = (low - 1); 
    for (int j = low; j <= high - 1; j++) 
	{ 
        if (arr[j] <= pivot) 
		{ 
            i++; 
            swap(arr[i], arr[j]); 
        } 
    } 
    swap(arr[i + 1], arr[high]); 
    return (i + 1); 
} 
int partition_r(int arr[], int low, int high) 
{ 
    srand(time(NULL)); 
    int random = low + rand() % (high - low); 
    swap(arr[random], arr[high]); 
    return partition(arr, low, high); 
} 
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
	{ 
        int pi = partition_r(arr, low, high); 
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
int main() 
{ 
    int arr[100],a,n; 
    printf("Enter no. of elements ");
    scanf("%d",&n);
    printf("Enter the elements ");
    for(a=0;a<n;a++)
    {
    	scanf("%d",&arr[a]);
	}
    quickSort(arr, 0, n - 1); 
    printf("Sorted array: \n"); 
    printArray(arr, n); 
    return 0; 
} 
