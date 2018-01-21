#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

void printArray(int arr[], int sizeOfArray);
void bubbleSort(int arr[], int sizeOfArray);
bool isSorted(int arr[], int sizeOfArray);

int main()
{
	int arr[5] = {5,1,3,4,2}; // size of testing array = 5
	int sizeOfArray = 5;
	
	printArray(arr,sizeOfArray);
	
	bubbleSort(arr, sizeOfArray);
	
	printArray(arr, sizeOfArray);
	
	return 0;
}

void bubbleSort(int arr[], int sizeOfArray)
{
/* Bubble sort works as follows: adjacent elements are compared and
 * swapped until the last one*/
	int iterationNumber = 1;
	// list will be use to traverse the entire array starting from
	// index 2 to 
	for(int list = sizeOfArray - 1; list >= 0; list--)
	{
		// loop that will iterate backwards checking if the order of the 
		// array matches, it will be swapping the values until the array 
		// its in order then it will exit
		for(int check = 1; check <= list ; check++)
		{
			if(arr[check] < arr[check-1])
			{
				int temp = arr[check];
				arr[check] = arr[check - 1];
				arr[check - 1] = temp;
			}
			printArray(arr, sizeOfArray);
		}
		cout<<"Iteration number: "<<iterationNumber<<endl;

		iterationNumber++;
		
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
