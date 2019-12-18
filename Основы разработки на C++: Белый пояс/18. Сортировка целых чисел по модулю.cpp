/******************************************
* AUTHOR : Allan Zea *
* USERNAME: sgtfdotfcrfn * 
******************************************/
#include <bits/stdc++.h>

using namespace std;

#define MAX 1000003
#define MOD 1000000007

int sort_by_abs(const int& a, const int& b) {
	return abs(a) < abs(b);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;

	vector<int> A(N);
	for (int& x : A) {
		cin >> x;
	}

	sort(A.begin(), A.end(), sort_by_abs);

	for (int x : A) {
		cout << x << " ";
	}
	cout << endl;

	return 0;
}