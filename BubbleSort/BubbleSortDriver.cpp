#include <iostream>
#include <ctime>
#include <cstdlib>
#include "BubbleSort.h"
#include "BubbleSort.cpp"

using namespace std;

int main()
{
	const int ARRAY_SIZE = 10;
	int testArray[ARRAY_SIZE];
//	int *testArray2;

	BubbleSort<int> bsobj;

	srand((unsigned int)time(0));

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		testArray[i] = 1 + rand() % 50;
		cout << testArray[i] << endl;
	}

	vector<int> testVect(testArray, testArray + ARRAY_SIZE);
	vector<int> testVect2(testVect.size());

	cout << "-------------END OF UNSORTED ARRAY-----------------" << endl << endl;

	testVect2 = bsobj.bubbleSort(testVect);

	for (size_t i = 0; i < testVect.size(); i++)
	{
		cout << testVect2[i] << endl;
	}

	cin.get();
	return 0;
}