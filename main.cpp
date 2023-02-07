#include<iostream>
using namespace std;

int main() {
	for (int i = 25; i <= 45; i++) {
		cout << i << " ";
	}

	cout << endl << endl;

	for (int j = 90; j >= 70; j -= 2) {
		cout << j << " ";
	}

	cout << endl << endl;

	for (int k = 10; k <= 5000; k *= 5) {
		cout << k << " ";
	}

	cout << endl << endl;


	for (int row = 0; row <= 6; row++) {
		for (int columns = 2; columns <= 4; columns++) {
			cout << columns << " ";
		}
		cout << endl;
	}

}
