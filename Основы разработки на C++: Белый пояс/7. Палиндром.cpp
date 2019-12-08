/******************************************
* AUTHOR : Allan Zea *
* USERNAME: sgtfdotfcrfn * 
******************************************/
#include <bits/stdc++.h>

using namespace std;

#define MAX 1000003
#define MOD 1000000007

/*
Напишите функцию, которая
- называется IsPalindrom
- возвращает bool
- принимает параметр типа string и возвращает, является ли 
переданная строка палиндромом
Палиндром - это слово или фраза, которые одинаково 
читаются слева направо и справа налево. Пустая строка 
является палиндромом.
*/
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

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string word;
	cin >> word;
	cout << IsPalindrom(word);

	return 0;
}