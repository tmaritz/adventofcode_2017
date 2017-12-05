#include <iostream>
#include <vector>
 
int main()
{
    std::vector<int> numbers = {0, 3, 0, 1, -3}; //PUT NUMBERS IN HERE
    int count = 0;
    int offset = 0;
    for (int i=0; i > -1 && i < numbers.size(); i+=offset)
	{
	    offset = numbers[i];
		if (offset>=3){
			numbers[i]-=1;
		}else{numbers[i]+=1;}	
	    count+=1;
    }
    std::cout << "ESCAPED. count: " << count;
}