#include <vector> 
#include "sort.h"

void merge(std::vector<int> &array, int left, int mid, int right){
	int i, j, k;

	int left_size = mid - left +1;
	int right_size = right - mid;

	std::vector<int> left_vector, right_vector;
	left_vector.reserve(left_size);
	right_vector.reserve(right_size);

	for(i=0; i<left_size; ++i){
		left_vector.push_back(array[left+1]);
	}
	for(j=0; j<right_size; j++){
		right_vector.push_back(array[mid+1+j]);
	}
	i=0,j=0,k=left;

	while( (i<left_size) && (j<right_size)) {
		if(left_vector[i] <= right_vector[j]){
			array[k] = left_vector[i];
			i++;
		}
		else{
			array[k]= right_vector[j];
			j++;
		}
		k++;
	}

	while(j<right_size){
		array[k] = right_vector[i];
		j++;
		k++;
	}
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
