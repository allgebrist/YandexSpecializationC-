/******************************************
* AUTHOR : Allan Zea *
* USERNAME: sgtfdotfcrfn * 
******************************************/
#include <bits/stdc++.h>

using namespace std;

#define MAX 1000003
#define MOD 1000000007


bool IsPalindrom(string word) {
	int n = word.length();
	int i = 0, j = n-1;
	while (i <= j) {
		if (word[i] != word[j]) {
			return false;
		}
		i++;
		j--;
	}
	return true;
}

/* 
Напишите функцию, которая
- называется PalindromFilter
- возвращает vector<string>
- принимает vector<string> words и int minLength и возвращает 
все строки из вектора words, которые являются палиндромами 
и имеют длину не меньше minLength  
*/
vector<string> PalindromFilter(vector<string>& words, int minLength) {
	vector<string> sol;
	for (auto w : words) {
		if (IsPalindrom(w) && w.length() >= minLength) {
			sol.push_back(w);
		}
	}
	return sol;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	return 0;
}