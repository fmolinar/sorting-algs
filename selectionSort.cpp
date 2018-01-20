#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

void printArray(int arr[], int sizeOfArray);
void selectionSort(int arr[], int sizeOfArray);
bool isSorted(int arr[], int sizeOfArray);

int main()
{
	int arr[5] = {5,2,8,1,3}; // size of testing array = 5
	int sizeOfArray = 5;
	
	printArray(arr,sizeOfArray);
	
	selectionSort(arr, sizeOfArray);
	
	printArray(arr, sizeOfArray);
	
	return 0;
}

void selectionSort(int arr[], int sizeOfArray)
{
/* selection sort works as follows: find the biggest item in the array
 *  and exchange it with the last entry. Then find the next biggest 
 * and exchange it with the second to last entry*/	
	int iteration = 1;
	int temp; // temporal value that will be swap
	for(int swap = sizeOfArray - 1; swap >= 0; swap--)
	{
	int max = swap; // index of the min value in the array
		cout<<"Number of iteration: "<<iteration<<endl;
		printArray(arr,sizeOfArray);
		for(int inner = swap; inner >= 0; inner--) //
		{
			if(arr[inner] > arr[max]) max = inner;
		}
		cout<<"Max number: "<<arr[max]<<endl;
		// do the swapping for the minimum value on the array
		temp = arr[swap]; // hold the head of the unsorted array
		arr[swap] = arr[max];
		arr[max] = temp; 
		iteration++;

	}
}

bool isSorted(int arr[], int sizeOfArray)
{
	/* for loop starting at index 1 to avoid going out of bounce*/
	for(int n = 1; n < sizeOfArray; n++)
	{
		if(arr[n] < arr[n-1]) return false;
	}
	return true;
		
}

void printArray(int arr[], int sizeOfArray)
{
	cout<<"Presented Array: ";
	for(int n = 0; n < 5; n++)
	{
		
		cout<<arr[n]<<" ";
	}
	cout<<"\n"<<"is ";
		if(isSorted(arr,sizeOfArray) == 0)
	{
		cout<<"Not Sorted "<<endl;
	}
	else {cout<<"Sorted "<<endl;}
}
