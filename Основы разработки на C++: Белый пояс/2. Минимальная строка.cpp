/******************************************
* AUTHOR : Allan Zea *
* USERNAME: sgtfdotfcrfn * 
******************************************/
#include <bits/stdc++.h>

using namespace std;

#define MAX 1000003
#define MOD 1000000007

/*
В стандартном потоке даны три строки, разделённые пробелом. 
Каждая строка состоит из строчных латинских букв и имеет 
длину не более 30 символов. Выведите в стандартный вывод 
лексикографически минимальную из них.
*/

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	vector<string> words(3);
	for (int k = 0; k < 3; k++) {
		cin >> words[k];
	}
	sort(begin(words), end(words));
	cout << words[0];

	return 0;
}