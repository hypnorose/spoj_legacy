#include<iostream>
using namespace std;
struct Liczby {
	int x = 0;
	int y = 0;
};
Liczby tab[401];
int main() {
	int j;
	int lp[78] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397 };
	for (int i = 0; i < 78; i++) {
		j = 0;
		while (lp[i] + lp[j] < 401&& j<78){
			tab[lp[i] + lp[j]].x = lp[i];
			tab[lp[i] + lp[j]].y = lp[j];
			j++;
		}
	}
	int n, l;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> l;
		if (tab[l].x != 0) {
			cout << "TAK " << tab[l].x << " " << tab[l].y << endl;
		}
		else {
			cout << "NIE" << endl;
		}
	}

}