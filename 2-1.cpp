for each row
	find largest value in row
		assign to x
	find smallest value in row
		subtract from x
	total +=x


#include <iostream>
#include <vector>
#include <iterator>
#include <sstream>

int main()
{
//std::ifstream file("plop");

std::string line;
std::vector< std::vector<int> > all_integers;
//int total;


while ( getline( std::cin, line ) ) {
  std::istringstream iss( line );
  all_integers.push_back(
		std::vector<int>( std::istream_iterator<int>(iss),
						  std::istream_iterator<int>() ) );
}
}

#include <iostream>
#include <fstream>
int main(int argc, char * argv[])
{
std::fstream myfile("D:\\data.txt", std::ios_base::in);
Int a;
while (myfile >> a)
{
printf("%f ", a);
}
getchar();
return 0;
}
