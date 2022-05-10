#include <iostream>
using namespace std;

int main() {
	bool sito[100000];
	for(int i = 0 ; i < 100000; i++){
		sito[i] = true;
	}
	sito[0] = false;
	sito[1] = false;
	
	
	
	for(int i = 2; i < 100000; i ++ ){
		if(sito[i] == true){
			for(int j = 2*i;j < 100000; j = j + i){
				sito[j] = false;
			}
		}
	}
	int liczba_testow;
	cin >> liczba_testow;
	
	for(int i = 0; i < liczba_testow;i++){
		int liczba;
		cin >> liczba;
		if(sito[liczba]){
			cout << "TAK" << endl;
		}
		else{
			cout << "NIE " << endl;
		}
		
	}
	
	
	

	return 0;
}