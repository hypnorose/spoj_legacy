#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>
#include <algorithm>
#define SIZE 26
using namespace std;
struct word {
	int first = 0;
	string second = "";
	bool operator<(word other) {
		if (other.first == first) {
			return second > other.second;
		}
		else return other.first > first;
	}
};
word words[100000];

int w = 0;
struct entry {
	int number = 0;
	bool isEnd = 0;
	entry * leaves[SIZE];
};
entry *new_entry() {
	entry * n = new entry();
	int i = 0;
	while (i < 26) {
		n->leaves[i] = NULL;
		i++;
	}
	return n;
}
void add(entry * akt, string word) {
	for (int i = 0; i < word.length(); i++) {
		if (word[i] >= 'a')word[i] -= 32;
		int which = word[i] - 65;
		if (akt->leaves[which] == NULL) {
			akt->leaves[which] = new_entry();
		}
		akt = akt->leaves[which];
	}
	akt->number++;
	akt->isEnd = true;
}
void dfs(string word, entry * akt) {

	if (akt == NULL) {
		return;
	}
	else if (akt->isEnd == 0);
	else {
		words[w].first = akt->number;
		words[w++].second = word;

	}
	for (int i = 0; i < SIZE; i++) {
		if (akt->leaves[i] != NULL)
			dfs(word + char(i + 65), akt->leaves[i]);
	}

}
int main() {
	entry * root = new_entry();
	string s;
	while (cin >> s) {
		cin >> s;
		cin >> s;
		add(root, s);
	}
	dfs("", root);
	sort(words, words + w);
	for (int i = w - 1; i >= 0; i--) {
		cout << words[i].second << " " << words[i].first << "\n";
	}
	return 0;
}