#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {

	vector<int> numbers;

	ifstream in("test.txt",ios::in);
	int number;
        //Read number using the extraction (>>) operator
        while (in >> number) {
		numbers.push_back(number);
    cout << "Stage 2";

	}

	in.close();

	cout << "Numbers:\n";

  int count = 0;

	for (int i=0; i<numbers.size(); i++) {
		cout << numbers[i] << '\n';
    if (numbers[i] == numbers[i+1]) {
      count += numbers[i];
    }
	}
  if (numbers[numbers.size()] == numbers[0]) {
    count += numbers[numbers.size()];
  }

  std::cout << count;



	cin.get();
	return 0;
}
