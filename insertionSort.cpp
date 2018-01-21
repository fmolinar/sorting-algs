#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

void printArray(int arr[], int sizeOfArray);
void insertionSort(int arr[], int sizeOfArray);
bool isSorted(int arr[], int sizeOfArray);

int main()
{
	int arr[5] = {5,10,4,2,1}; // size of testing array = 5
	int sizeOfArray = 5;
	
	printArray(arr,sizeOfArray);
	
	insertionSort(arr, sizeOfArray);
	
	printArray(arr, sizeOfArray);
	
	return 0;
}

void insertionSort(int arr[], int sizeOfArray)
{
/* insertion sort works as follows: its going to run from the beginning 
 * of the array by checking the right order of each element and 
 * inserting them in the right location*/
	int iterationNumber = 1;
	// list will be use to traverse the entire array starting from
	// index 2 
	for(int list = 1; list < sizeOfArray; list++)
	{
		// loop that will iterate backwards checking if the order of the 
		// array matches, it will be swapping the values until the array 
		// its in order then it will exit
		int check = list;
		while(arr[check] < arr[check-1])
		{
			printArray(arr, sizeOfArray);
			cout<<"Iteration number: "<<iterationNumber<<endl;
			// swap the values
			int temp = arr[check];
			arr[check] = arr[check - 1];
			arr[check - 1] = temp;
			check--;
		}
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
