/******************************************
* AUTHOR : Allan Zea *
* USERNAME: sgtfdotfcrfn * 
******************************************/
#include <bits/stdc++.h>

using namespace std;

#define MAX 1000003
#define MOD 1000000007

/*
Реализуйте функцию void Reverse(vector<int>& v), 
которая переставляет элементы вектора в обратном порядке.
*/

void Reverse(vector<int>& v) {
	if (v.size() != 0 && v.size() != 1) {
		int i = 0, j = v.size()-1;
		while (i <= j) {
			int tmp = v[i];
			v[i] = v[j];
			v[j] = tmp;
			i++;
			j--;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	/*
	vector<int> numbers = {1, 5, 3, 4, 2};
	Reverse(numbers);
	// numbers должен оказаться равен {2, 4, 3, 5, 1}

	for(auto x : numbers) {
		cout << x << " ";
	}
	*/

	return 0;
}