#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include <vector>

using namespace std;

// Class for bubble sorting arrays and vectors
template <class T>
class BubbleSort
{
public:
	// Accept any type of array to be bubble sorted
	T *bubbleSort(T arr[], int numberOfElements);

	// Accept any type of vector to be bubble sorted
	vector<T> bubbleSort(vector<T> arr);
};

#endif