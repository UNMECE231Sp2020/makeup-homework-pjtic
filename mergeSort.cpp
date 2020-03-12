#include <vector> 
#include "sort.h"

void merge(std::vector<int> &array, int left, int mid, int right)
{
}

void mergeSort(std::vector<int> &array, int left, int right) 
{
	int mid;
	if(left<right)
	{
		mid = (left+right)/2;

		mergeSort(array, left, mid);
		mergeSort(array, mid+1, right);

		merge(array, left, mid, right);
	}
}
