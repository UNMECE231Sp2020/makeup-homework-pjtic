#include <vector>
#include "search.h"

bool binarySearch(const std::vector<int>& set, int  value)
{
}

bool binarySearchRecursive(const int *begin, const int *end, int value)
{
	const int *mid;
	
	mid = begin + (end - begin)/2;
	if (mid == end)
	{
		return false;
	}
	if (*mid == value)
	{
		return true;
	}
	else if (*mid > value)
	{
		end = mid;
	}
	else if (*mid < value)
	{
		begin = mid + 1;
	}
	return binarySearchRecursive(begin, end, value);
	
}

