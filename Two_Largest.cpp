// Created by CodeDanCode

#include <iostream>
#include <string>
#include <vector>
using namespace std;


void TwoLargest(vector<int>);

int main() {

	vector<int> arr;
	int numbers;
	
	cout << "please enter whole numbers : " << endl;
	cout << "when finished enter 0 to find the two largest numbers" << endl;

	do {
		cin >> numbers;
		arr.push_back(numbers);

	} while (numbers);
	
	cout << "you have" << int(arr.size()) << " numbers.\n";
	cout << endl;
	
	TwoLargest(arr);


	system("PAUSE");
return 0;
}

void TwoLargest(vector<int> arr) {
	int large_1 = 0;
	int large_2 = 0;

	for (int i = 1; i < arr.size();i++) {
		if (arr[i] > large_1) {
			large_2 = large_1;
			large_1 = arr[i];
		}
		else if(large_2 < arr[i]){
			large_2 = arr[i];
		}

	}

	cout << "your largest number is : " << large_1 << endl;
	cout << "your second largest number is : " << large_2 << endl;
	cout << endl;

}
