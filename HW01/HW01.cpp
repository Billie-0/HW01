#include <iostream>
#include <vector>
using namespace std;

int getSum(const vector<int>& arr);
double getAverage(const vector<int>& arr);

int main() {
	int size;
	cout << "몇 개의 정수를 입력할 건가요? : ";
	cin >> size;

	vector<int> numbers(size);

	cout << size << "개의 정수를 입력하세요 : ";
	for (int i = 0; i < size; i++) {
		cin >> numbers[i];
	}

	int sum = getSum(numbers);
	double avg = getAverage(numbers);

	cout << "합계 : " << sum << endl;
	cout << "평균 : " << avg << endl;

	return 0;
}

int getSum(const vector<int>& arr) {
	int sum = 0;
	for (int i = 0; i < arr.size(); i++) {
		sum += arr[i];
	}
	return sum;
}

double getAverage(const vector<int>& arr) {
	int sum = getSum(arr);
	return (double)sum / arr.size();
}
