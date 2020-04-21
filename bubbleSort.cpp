#include "sort.h"

void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

void bubbleSort(int *begin, const int *end){
	
	
		int *headTemp, *nextTemp;

	for(headTemp = begin; headTemp!=end; ++headTemp){
	
		for(nextTemp=headTemp+1;nextTemp!=end; ++nextTemp){
			if(*(nextTemp)>*(nextTemp+1)){
				swap(headTemp,(nextTemp+1));
			}
		}
	}
		
		
}
