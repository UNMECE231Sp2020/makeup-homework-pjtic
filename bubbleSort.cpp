#include "sort.h"

void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

void bubbleSort(int *begin, const int *end){
/*	
	 for( int i=1; i>0;++i){
	  int temp = begin[i];
	  int j;
	  
	  	for(j=i-1; j>=0 && begin[i]>temp;--j) {
			begin[j+1] = begin[j];
		}
		begin[j+1] = temp;
	 } */	

	
	/*
	 *
	int i, j;
	for(i=0;i<n-1;++i){
	
	for(j=0;j<n-i-1;++j){
		if(array[j]>array[j+1]){
			swap(&array[j],&array[j+1]);
		}
	}
	}
}
	
*/

	
	       
	
	/*	int size = vect.size();
		for(int i=1; i<size;++i){
		for(int sorting =0; sorting<i+1;sorting++){
			if(vect[i]< vect[sorting]){
				swap(vector[sorting],vect[i]);
			}
		}
	}
}*/
	
}
	
	
	/*	int *headTemp, *nextTemp;

	for(headTemp = begin; headTemp!=end, ++headTemp){
	
		for(headTemp=begin;headTemp!=end, ++nextTemp){
			if(*(nextTemp)>*(nextTemp+1)){
				swap(headTemp,(nextTemp+1));
			}
		}
	}
		
		
}
*/
