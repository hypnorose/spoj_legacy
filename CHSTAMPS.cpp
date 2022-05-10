#include <iostream>
#include <string>
using namespace std;
int howmany = 0;
int A[16];
int k;
bool checkIfGood() {
	howmany = 0;
	for (int i = 0; i < 16; i++) {
		if (A[i] == 5)howmany++;
	}
	if (howmany >= k) {
		return true;
	}
	else return false;
}
void printOdp() {
	int w = 0;
	while (A[w] == 0) {
		w++;
	}
	while (w < 16) {
		cout << A[w];
		w++;
	}

}
void add(int i, int v) {

	A[i] += v;

	if (A[i] > 9) {
		A[i] = 0;
		add(i - 1, 1);
	}
}
void set(int i) {

	if (A[i] < 5) {
		A[i] = 5;
	}
	if (A[i] > 5) {
		add(i - 1, 1);
	
		if (checkIfGood()) {

			A[i] = 0;
			return;
		}
		
		A[i] = 5;
		if (checkIfGood()) {

			return;
		}

	}
}

void policz() {

	add(15, 1);

	if (checkIfGood()) { printOdp(); return; }
	for (int i = 15; i >= 0; i--) {
		set(i);
		//	printOdp();
		if (checkIfGood()) {
			printOdp();
			return;
		}
	}
}
int main() {
	howmany = 0;
	string word;
	cin >> word >> k;
	int j = word.length() - 1;
	for (int i = 15; i >= 0; i--) {
		A[i] = 0;
	}
	for (int i = 15; i >= 0; i--) {
		A[i] = 0;
		if (j == -1)break;
		if (word[j] == 0)break;
		A[i] = word[j--] - 48;
	}
	if (word.length() < k) {
		for (int i = 0; i < k; i++) {
			cout << 5;
		}
		return 0;
	}
	policz();

	return 0;
}