#include "BubbleSort.h"
#include <vector>

using namespace std;

// Function for bubble sorting an array
template <class T>
T *BubbleSort<T>::bubbleSort(T arr[], int numberOfElements)
{
	// tempVal must be of type T, because a value from the array will be assigned to it
	T tempVal;

	// initialize count to 1, so that we won't compare an index that is out of bounds
	int count = 1;

	// The outer loop which controls how many times we step through the array
	for (int j = 0; j < numberOfElements; j++)
	{
		// The inner loop that controls each step through the array. Each time we step through the array
		// we finish one positiion before we did the previous time, since we know one more element has 
		// been sorted with each pass
		for (int i = 0; i < numberOfElements-count; i++)
		{
			// Logic for swapping elements if the element on the left is greater than the element to its right
			if (arr[i] > arr[i+1])
			{
				tempVal = arr[i+1];
				arr[i+1] = arr[i];
				arr[i] = tempVal;
			}
		}
		// Increment count after each inner loop finishes, so that we don't re-check the elements that have 
		// already been sorted.
		count++;
	}

	return arr;
}

// Function for doing the same thing as aboove, but with a vector instead of an array.
// Logic is the exact same. Vector doesn't have to accept the size of the array as a 
// parameter, since it can return that by itself.
template <class T>
vector<T> BubbleSort<T>::bubbleSort(vector<T> arr)
{
	T tempVal;
	int count = 1;

	for (size_t j = 0; j < arr.size(); j++)
	{
		for (size_t i = 0; i < arr.size()-count; i++)
		{
			if (arr[i] > arr[i+1])
			{
				tempVal = arr[i+1];
				arr[i+1] = arr[i];
				arr[i] = tempVal;
			}
		}
		count++;
	}

	return arr;
}