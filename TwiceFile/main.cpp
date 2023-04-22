#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

int main() {
	ifstream Nums;
	ofstream TwiceNums;
	int temp;

	Nums.open("Nums.txt");
	TwiceNums.open("TwiceNums.txt");
	
	if (!Nums) {
		cout << "Error, cant open file\n";
		return 1;
	}

	TwiceNums << "Nums:" << '\n';
	cout << "Nums:" << '\n';
	while (!Nums.eof()) {
		Nums >> temp;
		TwiceNums << temp * 2 << '\n';
		cout << temp << " -> " << temp * 2 << '\n';
	}

	Nums.close();
	TwiceNums.close();

	return 0;
}