/******************************************
* AUTHOR : Allan Zea *
* USERNAME: sgtfdotfcrfn * 
******************************************/
#include <bits/stdc++.h>

using namespace std;

#define MAX 1000003
#define MOD 1000000007

/*
Даны значения температуры, наблюдавшиеся в течение N подряд 
идущих дней. Найдите номера дней (в нумерации с нуля) со значением 
температуры выше среднего арифметического за все N дней.

Гарантируется, что среднее арифметическое значений температуры 
является целым числом.

Формат ввода:
Вводится число N, затем N неотрицательных целых чисел — значения 
температуры в 0-й, 1-й, ... (N−1)-й день.

Формат вывода:
Первое число K — количество дней, значение температуры в 
которых выше среднего арифметического. Затем K целых 
чисел — номера этих дней.
*/

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	
	int mean = 0;
	vector<int> temperatures(n);
	for (int k = 0; k < n; k++) {
		cin >> temperatures[k];
		mean += temperatures[k];
	}
	mean /= n;

	vector<int> ans;
	for (int k = 0; k < n; k++) {
		if (temperatures[k] > mean) {
			ans.push_back(k);
		}
	}

	cout << ans.size() << endl;
	for (auto a : ans) {
		cout << a << " ";
	}

	return 0;
}