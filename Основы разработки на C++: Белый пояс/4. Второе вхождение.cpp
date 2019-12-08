/******************************************
* AUTHOR : Allan Zea *
* USERNAME: sgtfdotfcrfn * 
******************************************/
#include <bits/stdc++.h>

using namespace std;

#define MAX 1000003
#define MOD 1000000007

/*
Дана строка. Найдите в этой строке второе вхождение буквы f 
и выведите индекс этого вхождения. Если буква f в данной 
строке встречается только один раз, выведите число -1, а 
если не встречается ни разу, выведите число -2. Индексы 
нумеруются с нуля.
*/

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string word;
	cin >> word;

	int f_count = 0;
	for (int k = 0; k < word.length(); k++) {
		if (word[k] == 'f') {
			if (f_count == 1) {
				cout << k;
				return 0;
			} else {
				f_count++;
			}
		}
	}
	
	if (f_count == 1) {
		cout << -1;
	} else {
		cout << -2;
	}

	return 0;
}