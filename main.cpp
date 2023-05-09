#include <iostream>

using namespace std;

int collatz(int num) {
	int iterations = 1;
	cout << num << ", ";
	while (num > 1) {
		if (num%2 == 0) {
			num = num/2;
		} else {
			num = (3*num) + 1;
		}
		cout << num << ", ";
		iterations++;
	}
	cout << "\n\n" << iterations << " iteracoes.\n";
	cout << "----------------------------------------\n";
}

int main() {
	while (true) {
		cout << "Insira um numero: ";
		int num = 0;
		cin >> num;
		
		collatz(num);	
	}
}
