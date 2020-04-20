#include <iostream>
#include <fstream>
#include <vector>

#include "Timer.h"
#include "search.h"
#include "sort.h"

void  readFile(const char *filename, std::vector<int>& set) 
{

	std::ifstream fin(filename);
	while(true)
	{
		int val;
		fin >> val;
		if (fin.eof())
		{
			break;
		}
		set.push_back(val);
	}
	fin.close();
}

using IntVector = std::vector<int>;

int main()
{
	IntVector numbers;
	IntVector search;

	numbers.reserve(1000000);
	search.reserve(2000);

	readFile("numbers", numbers);
	readFile("search", search);

	{
		Timer timer("Time to linear search all values: ");

		int match= 0;
		for (size_t i = 0; i < search.size(); i++)
		{
			if (linearSearch(numbers, search[i]))
				match++;
		}

		std::cout << "Found "<< match << "/"
			<< search.size() << " values." << std::endl;
	}

	//Call pointer version of linear search 
	{
		Timer timer("Time to linear search all values (pointers): ");
		int match = 0;
		for(size_t i=0; i < search.size();++i){
			if(linearSearch(numbers.data(),numbers.data()+numbers.size(),search[i])){
			match++;
			}
		}
		
		std::cout << "Found "<< match << "/"
			<< search.size() << " values." << std::endl;
	}

	//Call binary search
	{
        Timer timer("Time to binary search all values: ");

	int match = 0;
	for(size_t i=0; i < search.size(); ++i){
		if(binarySearch(numbers,search[i]))
			++match;
	}

		std::cout << "Found "<< match << "/"
			<< search.size() << " values." << std::endl;
    }  

	//Call the recursive version of binary search
    {
		Timer timer("Time to binary search all values (Recursive): ");
		int match = 0;
		for(size_t i=0; i < search.size(); ++i){
			if(binarySearchRecursive(numbers.data(),numbers.data()+ numbers.size(),search[i])){
			++match;
		

			}
		
		}
		std::cout << "Found "<< match << "/"
			<< search.size() << " values." << std::endl;
    }

	IntVector search_bubble = search;
	IntVector search_merge = search;
	
	//Call your bubble sort algorithm
	{
		Timer timer ("Time to sort array with bubble sort: ");
		bubbleSort(search_bubble.data(),search_bubble.data()+search_bubble.size());
	}

	//Call your merge sort algorithm
	{
		Timer timer ("Time to sort array with merge sort: ");
		mergeSort(search_merge,0,search_merge.size()-1);
	}
	
	return 0;
}


