#include <vector>

bool linearSearch(const std::vector<int>& A_set, int value){
	for(auto i = A_set.begin(); i!=A_set.end(); ++i){
		if(value == *i) {
			return true;
		}
	}
	return false;
}

bool linearSearch(const int *begin, const int *end, int value)
{
	for(auto i=begin; i!=end; ++i){
		if(value==*i){
			return true;
		}
	}
	return false;
}


